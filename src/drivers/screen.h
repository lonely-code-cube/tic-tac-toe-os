#ifndef SCREEN_H
#define SCREEN_H

#define VIDEO_ADDRESS 0xb8000
#define MAX_ROWS 25
#define MAX_COLS 80
#define WHITE_ON_BLACK 0x0f
#define RED_ON_WHITE 0xf4

/* Screen i/o ports */
#define REG_SCREEN_CTRL 0x3d4
#define REG_SCREEN_DATA 0x3d5

/* Public kernel API */
void clear_screen();
void clear_line();
void kprint_at(char *message, int col, int row, char color);
void kprint_char(char ch, int col, int row, char color);
void kprint_int(int num, char color);
void kprint(char *message, char color);
void kprint_backspace();

#endif

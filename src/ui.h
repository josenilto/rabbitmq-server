#ifndef NEOVIM_UI_H
#define NEOVIM_UI_H
/* ui.c */
void ui_write(char_u *s, int len);
int ui_inchar(char_u *buf, int maxlen, long wtime, int tb_change_cnt);
int ui_char_avail(void);
void ui_delay(long msec, int ignoreinput);
void ui_suspend(void);
int ui_get_shellsize(void);
void ui_set_shellsize(int mustset);
void ui_breakcheck(void);
int vim_is_input_buf_full(void);
int vim_is_input_buf_empty(void);
int vim_free_in_input_buf(void);
char_u *get_input_buf(void);
void set_input_buf(char_u *p);
void add_to_input_buf(char_u *s, int len);
void add_to_input_buf_csi(char_u *str, int len);
void push_raw_key(char_u *s, int len);
void trash_input_buf(void);
int read_from_input_buf(char_u *buf, long maxlen);
void fill_input_buf(int exit_on_error);
void read_error_exit(void);
void ui_cursor_shape(void);
int check_col(int col);
int check_row(int row);
void yank_cut_buffer0(Display *dpy, VimClipboard *cbd);
int jump_to_mouse(int flags, int *inclusive, int which_button);
int mouse_comp_pos(win_T *win, int *rowp, int *colp, linenr_T *lnump);
win_T *mouse_find_win(int *rowp, int *colp);
int get_fpos_of_mouse(pos_T *mpos);
int vcol2col(win_T *wp, linenr_T lnum, int vcol);
void im_save_status(long *psave);
#endif /* NEOVIM_UI_H */

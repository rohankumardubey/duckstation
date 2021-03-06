#ifndef RC_URL_H
#define RC_URL_H

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

int rc_url_award_cheevo(char* buffer, size_t size, const char* user_name, const char* login_token, unsigned cheevo_id, int hardcore, const char* game_hash);

int rc_url_submit_lboard(char* buffer, size_t size, const char* user_name, const char* login_token, unsigned lboard_id, int value);

int rc_url_get_gameid(char* buffer, size_t size, const char* hash);

int rc_url_get_patch(char* buffer, size_t size, const char* user_name, const char* login_token, unsigned gameid);

int rc_url_get_badge_image(char* buffer, size_t size, const char* badge_name);

int rc_url_login_with_password(char* buffer, size_t size, const char* user_name, const char* password);

int rc_url_login_with_token(char* buffer, size_t size, const char* user_name, const char* login_token);

int rc_url_get_unlock_list(char* buffer, size_t size, const char* user_name, const char* login_token, unsigned gameid, int hardcore);

int rc_url_post_playing(char* buffer, size_t size, const char* user_name, const char* login_token, unsigned gameid);

int rc_url_ping(char* url_buffer, size_t url_buffer_size, char* post_buffer, size_t post_buffer_size,
                const char* user_name, const char* login_token, unsigned gameid, const char* rich_presence);

// Custom exports, static in upstream rcheevos
int rc_url_build_dorequest(char* url_buffer, size_t url_buffer_size, size_t* buffer_offset, const char* api, const char* user_name);

int rc_url_append_unum(char* buffer, size_t buffer_size, size_t* buffer_offset, const char* param, unsigned value);

int rc_url_append_str(char* buffer, size_t buffer_size, size_t* buffer_offset, const char* param, const char* value);

#ifdef __cplusplus
}
#endif

#endif /* RC_URL_H */

/*
    DO NOT EDIT THIS FILE!
    This file was automatically generated by the bproto generator.
*/

#include <stdint.h>

#include <misc/debug.h>
#include <misc/byteorder.h>
#include <bproto/BProto.h>


#define msg1_SIZEa (sizeof(struct BProto_header_s) + sizeof(struct BProto_uint16_s))
#define msg1_SIZEb (sizeof(struct BProto_header_s) + sizeof(struct BProto_uint32_s))
#define msg1_SIZEc (sizeof(struct BProto_header_s) + sizeof(struct BProto_uint64_s))
#define msg1_SIZEd (sizeof(struct BProto_header_s) + sizeof(struct BProto_uint16_s))
#define msg1_SIZEe (sizeof(struct BProto_header_s) + sizeof(struct BProto_uint8_s))
#define msg1_SIZEf(_len) (sizeof(struct BProto_header_s) + sizeof(struct BProto_data_header_s) + (_len))
#define msg1_SIZEg (sizeof(struct BProto_header_s) + sizeof(struct BProto_data_header_s) + (4))

typedef struct {
    uint8_t *out;
    int used;
    int a_count;
    int b_count;
    int c_count;
    int d_count;
    int e_count;
    int f_count;
    int g_count;
} msg1Writer;

static void msg1Writer_Init (msg1Writer *o, uint8_t *out);
static int msg1Writer_Finish (msg1Writer *o);
static void msg1Writer_Adda (msg1Writer *o, uint16_t v);
static void msg1Writer_Addb (msg1Writer *o, uint32_t v);
static void msg1Writer_Addc (msg1Writer *o, uint64_t v);
static void msg1Writer_Addd (msg1Writer *o, uint16_t v);
static void msg1Writer_Adde (msg1Writer *o, uint8_t v);
static uint8_t * msg1Writer_Addf (msg1Writer *o, int len);
static uint8_t * msg1Writer_Addg (msg1Writer *o);

typedef struct {
    uint8_t *buf;
    int buf_len;
    int a_start;
    int a_span;
    int a_pos;
    int b_start;
    int b_span;
    int b_pos;
    int c_start;
    int c_span;
    int c_pos;
    int d_start;
    int d_span;
    int d_pos;
    int e_start;
    int e_span;
    int e_pos;
    int f_start;
    int f_span;
    int f_pos;
    int g_start;
    int g_span;
    int g_pos;
} msg1Parser;

static int msg1Parser_Init (msg1Parser *o, uint8_t *buf, int buf_len);
static int msg1Parser_GotEverything (msg1Parser *o);
static int msg1Parser_Geta (msg1Parser *o, uint16_t *v);
static void msg1Parser_Reseta (msg1Parser *o);
static void msg1Parser_Forwarda (msg1Parser *o);
static int msg1Parser_Getb (msg1Parser *o, uint32_t *v);
static void msg1Parser_Resetb (msg1Parser *o);
static void msg1Parser_Forwardb (msg1Parser *o);
static int msg1Parser_Getc (msg1Parser *o, uint64_t *v);
static void msg1Parser_Resetc (msg1Parser *o);
static void msg1Parser_Forwardc (msg1Parser *o);
static int msg1Parser_Getd (msg1Parser *o, uint16_t *v);
static void msg1Parser_Resetd (msg1Parser *o);
static void msg1Parser_Forwardd (msg1Parser *o);
static int msg1Parser_Gete (msg1Parser *o, uint8_t *v);
static void msg1Parser_Resete (msg1Parser *o);
static void msg1Parser_Forwarde (msg1Parser *o);
static int msg1Parser_Getf (msg1Parser *o, uint8_t **data, int *data_len);
static void msg1Parser_Resetf (msg1Parser *o);
static void msg1Parser_Forwardf (msg1Parser *o);
static int msg1Parser_Getg (msg1Parser *o, uint8_t **data);
static void msg1Parser_Resetg (msg1Parser *o);
static void msg1Parser_Forwardg (msg1Parser *o);

void msg1Writer_Init (msg1Writer *o, uint8_t *out)
{
    o->out = out;
    o->used = 0;
    o->a_count = 0;
    o->b_count = 0;
    o->c_count = 0;
    o->d_count = 0;
    o->e_count = 0;
    o->f_count = 0;
    o->g_count = 0;
}

int msg1Writer_Finish (msg1Writer *o)
{
    ASSERT(o->used >= 0)
    ASSERT(o->a_count == 1)
    ASSERT(o->b_count >= 0 && o->b_count <= 1)
    ASSERT(o->c_count >= 1)
    ASSERT(o->d_count >= 0)
    ASSERT(o->e_count == 1)
    ASSERT(o->f_count == 1)
    ASSERT(o->g_count == 1)

    return o->used;
}

void msg1Writer_Adda (msg1Writer *o, uint16_t v)
{
    ASSERT(o->used >= 0)
    ASSERT(o->a_count == 0)
    

    ((struct BProto_header_s *)(o->out + o->used))->id = htol16(5);
    ((struct BProto_header_s *)(o->out + o->used))->type = htol16(BPROTO_TYPE_UINT16);
    o->used += sizeof(struct BProto_header_s);

    ((struct BProto_uint16_s *)(o->out + o->used))->v = htol16(v);
    o->used += sizeof(struct BProto_uint16_s);

    o->a_count++;
}

void msg1Writer_Addb (msg1Writer *o, uint32_t v)
{
    ASSERT(o->used >= 0)
    ASSERT(o->b_count == 0)
    

    ((struct BProto_header_s *)(o->out + o->used))->id = htol16(6);
    ((struct BProto_header_s *)(o->out + o->used))->type = htol16(BPROTO_TYPE_UINT32);
    o->used += sizeof(struct BProto_header_s);

    ((struct BProto_uint32_s *)(o->out + o->used))->v = htol32(v);
    o->used += sizeof(struct BProto_uint32_s);

    o->b_count++;
}

void msg1Writer_Addc (msg1Writer *o, uint64_t v)
{
    ASSERT(o->used >= 0)
    
    

    ((struct BProto_header_s *)(o->out + o->used))->id = htol16(7);
    ((struct BProto_header_s *)(o->out + o->used))->type = htol16(BPROTO_TYPE_UINT64);
    o->used += sizeof(struct BProto_header_s);

    ((struct BProto_uint64_s *)(o->out + o->used))->v = htol64(v);
    o->used += sizeof(struct BProto_uint64_s);

    o->c_count++;
}

void msg1Writer_Addd (msg1Writer *o, uint16_t v)
{
    ASSERT(o->used >= 0)
    
    

    ((struct BProto_header_s *)(o->out + o->used))->id = htol16(8);
    ((struct BProto_header_s *)(o->out + o->used))->type = htol16(BPROTO_TYPE_UINT16);
    o->used += sizeof(struct BProto_header_s);

    ((struct BProto_uint16_s *)(o->out + o->used))->v = htol16(v);
    o->used += sizeof(struct BProto_uint16_s);

    o->d_count++;
}

void msg1Writer_Adde (msg1Writer *o, uint8_t v)
{
    ASSERT(o->used >= 0)
    ASSERT(o->e_count == 0)
    

    ((struct BProto_header_s *)(o->out + o->used))->id = htol16(9);
    ((struct BProto_header_s *)(o->out + o->used))->type = htol16(BPROTO_TYPE_UINT8);
    o->used += sizeof(struct BProto_header_s);

    ((struct BProto_uint8_s *)(o->out + o->used))->v = htol8(v);
    o->used += sizeof(struct BProto_uint8_s);

    o->e_count++;
}

uint8_t * msg1Writer_Addf (msg1Writer *o, int len)
{
    ASSERT(o->used >= 0)
    ASSERT(o->f_count == 0)
    ASSERT(len >= 0 && len <= UINT32_MAX)

    ((struct BProto_header_s *)(o->out + o->used))->id = htol16(10);
    ((struct BProto_header_s *)(o->out + o->used))->type = htol16(BPROTO_TYPE_DATA);
    o->used += sizeof(struct BProto_header_s);

    ((struct BProto_data_header_s *)(o->out + o->used))->len = htol32(len);
    o->used += sizeof(struct BProto_data_header_s);

    uint8_t *dest = (o->out + o->used);
    o->used += len;

    o->f_count++;

    return dest;
}

uint8_t * msg1Writer_Addg (msg1Writer *o)
{
    ASSERT(o->used >= 0)
    ASSERT(o->g_count == 0)
    

    ((struct BProto_header_s *)(o->out + o->used))->id = htol16(11);
    ((struct BProto_header_s *)(o->out + o->used))->type = htol16(BPROTO_TYPE_CONSTDATA);
    o->used += sizeof(struct BProto_header_s);

    ((struct BProto_data_header_s *)(o->out + o->used))->len = htol32(4);
    o->used += sizeof(struct BProto_data_header_s);

    uint8_t *dest = (o->out + o->used);
    o->used += (4);

    o->g_count++;

    return dest;
}

int msg1Parser_Init (msg1Parser *o, uint8_t *buf, int buf_len)
{
    ASSERT(buf_len >= 0)

    o->buf = buf;
    o->buf_len = buf_len;
    o->a_start = o->buf_len;
    o->a_span = 0;
    o->a_pos = 0;
    o->b_start = o->buf_len;
    o->b_span = 0;
    o->b_pos = 0;
    o->c_start = o->buf_len;
    o->c_span = 0;
    o->c_pos = 0;
    o->d_start = o->buf_len;
    o->d_span = 0;
    o->d_pos = 0;
    o->e_start = o->buf_len;
    o->e_span = 0;
    o->e_pos = 0;
    o->f_start = o->buf_len;
    o->f_span = 0;
    o->f_pos = 0;
    o->g_start = o->buf_len;
    o->g_span = 0;
    o->g_pos = 0;

    int a_count = 0;
    int b_count = 0;
    int c_count = 0;
    int d_count = 0;
    int e_count = 0;
    int f_count = 0;
    int g_count = 0;

    int pos = 0;
    int left = o->buf_len;

    while (left > 0) {
        int entry_pos = pos;

        if (!(left >= sizeof(struct BProto_header_s))) {
            return 0;
        }
        struct BProto_header_s *header = (struct BProto_header_s *)(o->buf + pos);
        pos += sizeof(struct BProto_header_s);
        left -= sizeof(struct BProto_header_s);
        uint16_t type = ltoh16(header->type);
        uint16_t id = ltoh16(header->id);

        switch (type) {
            case BPROTO_TYPE_UINT8: {
                if (!(left >= sizeof(struct BProto_uint8_s))) {
                    return 0;
                }
                struct BProto_uint8_s *val = (struct BProto_uint8_s *)(o->buf + pos);
                pos += sizeof(struct BProto_uint8_s);
                left -= sizeof(struct BProto_uint8_s);

                switch (id) {
                    case 9:
                        if (o->e_start == o->buf_len) {
                            o->e_start = entry_pos;
                        }
                        o->e_span = pos - o->e_start;
                        e_count++;
                        break;
                    default:
                        return 0;
                }
            } break;
            case BPROTO_TYPE_UINT16: {
                if (!(left >= sizeof(struct BProto_uint16_s))) {
                    return 0;
                }
                struct BProto_uint16_s *val = (struct BProto_uint16_s *)(o->buf + pos);
                pos += sizeof(struct BProto_uint16_s);
                left -= sizeof(struct BProto_uint16_s);

                switch (id) {
                    case 5:
                        if (o->a_start == o->buf_len) {
                            o->a_start = entry_pos;
                        }
                        o->a_span = pos - o->a_start;
                        a_count++;
                        break;
                    case 8:
                        if (o->d_start == o->buf_len) {
                            o->d_start = entry_pos;
                        }
                        o->d_span = pos - o->d_start;
                        d_count++;
                        break;
                    default:
                        return 0;
                }
            } break;
            case BPROTO_TYPE_UINT32: {
                if (!(left >= sizeof(struct BProto_uint32_s))) {
                    return 0;
                }
                struct BProto_uint32_s *val = (struct BProto_uint32_s *)(o->buf + pos);
                pos += sizeof(struct BProto_uint32_s);
                left -= sizeof(struct BProto_uint32_s);

                switch (id) {
                    case 6:
                        if (o->b_start == o->buf_len) {
                            o->b_start = entry_pos;
                        }
                        o->b_span = pos - o->b_start;
                        b_count++;
                        break;
                    default:
                        return 0;
                }
            } break;
            case BPROTO_TYPE_UINT64: {
                if (!(left >= sizeof(struct BProto_uint64_s))) {
                    return 0;
                }
                struct BProto_uint64_s *val = (struct BProto_uint64_s *)(o->buf + pos);
                pos += sizeof(struct BProto_uint64_s);
                left -= sizeof(struct BProto_uint64_s);

                switch (id) {
                    case 7:
                        if (o->c_start == o->buf_len) {
                            o->c_start = entry_pos;
                        }
                        o->c_span = pos - o->c_start;
                        c_count++;
                        break;
                    default:
                        return 0;
                }
            } break;
            case BPROTO_TYPE_DATA:
            case BPROTO_TYPE_CONSTDATA:
            {
                if (!(left >= sizeof(struct BProto_data_header_s))) {
                    return 0;
                }
                struct BProto_data_header_s *val = (struct BProto_data_header_s *)(o->buf + pos);
                pos += sizeof(struct BProto_data_header_s);
                left -= sizeof(struct BProto_data_header_s);

                uint32_t payload_len = ltoh32(val->len);
                if (!(left >= payload_len)) {
                    return 0;
                }
                pos += payload_len;
                left -= payload_len;

                switch (id) {
                    case 10:
                        if (!(type == BPROTO_TYPE_DATA)) {
                            return 0;
                        }
                        if (o->f_start == o->buf_len) {
                            o->f_start = entry_pos;
                        }
                        o->f_span = pos - o->f_start;
                        f_count++;
                        break;
                    case 11:
                        if (!(type == BPROTO_TYPE_CONSTDATA)) {
                            return 0;
                        }
                        if (!(payload_len == (4))) {
                            return 0;
                        }
                        if (o->g_start == o->buf_len) {
                            o->g_start = entry_pos;
                        }
                        o->g_span = pos - o->g_start;
                        g_count++;
                        break;
                    default:
                        return 0;
                }
            } break;
            default:
                return 0;
        }
    }

    if (!(a_count == 1)) {
        return 0;
    }
    if (!(b_count <= 1)) {
        return 0;
    }
    if (!(c_count >= 1)) {
        return 0;
    }
    if (!(e_count == 1)) {
        return 0;
    }
    if (!(f_count == 1)) {
        return 0;
    }
    if (!(g_count == 1)) {
        return 0;
    }

    return 1;
}

int msg1Parser_GotEverything (msg1Parser *o)
{
    return (
        o->a_pos == o->a_span
        &&
        o->b_pos == o->b_span
        &&
        o->c_pos == o->c_span
        &&
        o->d_pos == o->d_span
        &&
        o->e_pos == o->e_span
        &&
        o->f_pos == o->f_span
        &&
        o->g_pos == o->g_span
    );
}

int msg1Parser_Geta (msg1Parser *o, uint16_t *v)
{
    ASSERT(o->a_pos >= 0)
    ASSERT(o->a_pos <= o->a_span)

    int left = o->a_span - o->a_pos;

    while (left > 0) {
        ASSERT(left >= sizeof(struct BProto_header_s))
        struct BProto_header_s *header = (struct BProto_header_s *)(o->buf + o->a_start + o->a_pos);
        o->a_pos += sizeof(struct BProto_header_s);
        left -= sizeof(struct BProto_header_s);
        uint16_t type = ltoh16(header->type);
        uint16_t id = ltoh16(header->id);

        switch (type) {
            case BPROTO_TYPE_UINT8: {
                ASSERT(left >= sizeof(struct BProto_uint8_s))
                struct BProto_uint8_s *val = (struct BProto_uint8_s *)(o->buf + o->a_start + o->a_pos);
                o->a_pos += sizeof(struct BProto_uint8_s);
                left -= sizeof(struct BProto_uint8_s);
            } break;
            case BPROTO_TYPE_UINT16: {
                ASSERT(left >= sizeof(struct BProto_uint16_s))
                struct BProto_uint16_s *val = (struct BProto_uint16_s *)(o->buf + o->a_start + o->a_pos);
                o->a_pos += sizeof(struct BProto_uint16_s);
                left -= sizeof(struct BProto_uint16_s);

                if (id == 5) {
                    *v = ltoh16(val->v);
                    return 1;
                }
            } break;
            case BPROTO_TYPE_UINT32: {
                ASSERT(left >= sizeof(struct BProto_uint32_s))
                struct BProto_uint32_s *val = (struct BProto_uint32_s *)(o->buf + o->a_start + o->a_pos);
                o->a_pos += sizeof(struct BProto_uint32_s);
                left -= sizeof(struct BProto_uint32_s);
            } break;
            case BPROTO_TYPE_UINT64: {
                ASSERT(left >= sizeof(struct BProto_uint64_s))
                struct BProto_uint64_s *val = (struct BProto_uint64_s *)(o->buf + o->a_start + o->a_pos);
                o->a_pos += sizeof(struct BProto_uint64_s);
                left -= sizeof(struct BProto_uint64_s);
            } break;
            case BPROTO_TYPE_DATA:
            case BPROTO_TYPE_CONSTDATA:
            {
                ASSERT(left >= sizeof(struct BProto_data_header_s))
                struct BProto_data_header_s *val = (struct BProto_data_header_s *)(o->buf + o->a_start + o->a_pos);
                o->a_pos += sizeof(struct BProto_data_header_s);
                left -= sizeof(struct BProto_data_header_s);

                uint32_t payload_len = ltoh32(val->len);
                ASSERT(left >= payload_len)
                uint8_t *payload = o->buf + o->a_start + o->a_pos;
                o->a_pos += payload_len;
                left -= payload_len;
            } break;
            default:
                ASSERT(0);
        }
    }

    return 0;
}

void msg1Parser_Reseta (msg1Parser *o)
{
    o->a_pos = 0;
}

void msg1Parser_Forwarda (msg1Parser *o)
{
    o->a_pos = o->a_span;
}

int msg1Parser_Getb (msg1Parser *o, uint32_t *v)
{
    ASSERT(o->b_pos >= 0)
    ASSERT(o->b_pos <= o->b_span)

    int left = o->b_span - o->b_pos;

    while (left > 0) {
        ASSERT(left >= sizeof(struct BProto_header_s))
        struct BProto_header_s *header = (struct BProto_header_s *)(o->buf + o->b_start + o->b_pos);
        o->b_pos += sizeof(struct BProto_header_s);
        left -= sizeof(struct BProto_header_s);
        uint16_t type = ltoh16(header->type);
        uint16_t id = ltoh16(header->id);

        switch (type) {
            case BPROTO_TYPE_UINT8: {
                ASSERT(left >= sizeof(struct BProto_uint8_s))
                struct BProto_uint8_s *val = (struct BProto_uint8_s *)(o->buf + o->b_start + o->b_pos);
                o->b_pos += sizeof(struct BProto_uint8_s);
                left -= sizeof(struct BProto_uint8_s);
            } break;
            case BPROTO_TYPE_UINT16: {
                ASSERT(left >= sizeof(struct BProto_uint16_s))
                struct BProto_uint16_s *val = (struct BProto_uint16_s *)(o->buf + o->b_start + o->b_pos);
                o->b_pos += sizeof(struct BProto_uint16_s);
                left -= sizeof(struct BProto_uint16_s);
            } break;
            case BPROTO_TYPE_UINT32: {
                ASSERT(left >= sizeof(struct BProto_uint32_s))
                struct BProto_uint32_s *val = (struct BProto_uint32_s *)(o->buf + o->b_start + o->b_pos);
                o->b_pos += sizeof(struct BProto_uint32_s);
                left -= sizeof(struct BProto_uint32_s);

                if (id == 6) {
                    *v = ltoh32(val->v);
                    return 1;
                }
            } break;
            case BPROTO_TYPE_UINT64: {
                ASSERT(left >= sizeof(struct BProto_uint64_s))
                struct BProto_uint64_s *val = (struct BProto_uint64_s *)(o->buf + o->b_start + o->b_pos);
                o->b_pos += sizeof(struct BProto_uint64_s);
                left -= sizeof(struct BProto_uint64_s);
            } break;
            case BPROTO_TYPE_DATA:
            case BPROTO_TYPE_CONSTDATA:
            {
                ASSERT(left >= sizeof(struct BProto_data_header_s))
                struct BProto_data_header_s *val = (struct BProto_data_header_s *)(o->buf + o->b_start + o->b_pos);
                o->b_pos += sizeof(struct BProto_data_header_s);
                left -= sizeof(struct BProto_data_header_s);

                uint32_t payload_len = ltoh32(val->len);
                ASSERT(left >= payload_len)
                uint8_t *payload = o->buf + o->b_start + o->b_pos;
                o->b_pos += payload_len;
                left -= payload_len;
            } break;
            default:
                ASSERT(0);
        }
    }

    return 0;
}

void msg1Parser_Resetb (msg1Parser *o)
{
    o->b_pos = 0;
}

void msg1Parser_Forwardb (msg1Parser *o)
{
    o->b_pos = o->b_span;
}

int msg1Parser_Getc (msg1Parser *o, uint64_t *v)
{
    ASSERT(o->c_pos >= 0)
    ASSERT(o->c_pos <= o->c_span)

    int left = o->c_span - o->c_pos;

    while (left > 0) {
        ASSERT(left >= sizeof(struct BProto_header_s))
        struct BProto_header_s *header = (struct BProto_header_s *)(o->buf + o->c_start + o->c_pos);
        o->c_pos += sizeof(struct BProto_header_s);
        left -= sizeof(struct BProto_header_s);
        uint16_t type = ltoh16(header->type);
        uint16_t id = ltoh16(header->id);

        switch (type) {
            case BPROTO_TYPE_UINT8: {
                ASSERT(left >= sizeof(struct BProto_uint8_s))
                struct BProto_uint8_s *val = (struct BProto_uint8_s *)(o->buf + o->c_start + o->c_pos);
                o->c_pos += sizeof(struct BProto_uint8_s);
                left -= sizeof(struct BProto_uint8_s);
            } break;
            case BPROTO_TYPE_UINT16: {
                ASSERT(left >= sizeof(struct BProto_uint16_s))
                struct BProto_uint16_s *val = (struct BProto_uint16_s *)(o->buf + o->c_start + o->c_pos);
                o->c_pos += sizeof(struct BProto_uint16_s);
                left -= sizeof(struct BProto_uint16_s);
            } break;
            case BPROTO_TYPE_UINT32: {
                ASSERT(left >= sizeof(struct BProto_uint32_s))
                struct BProto_uint32_s *val = (struct BProto_uint32_s *)(o->buf + o->c_start + o->c_pos);
                o->c_pos += sizeof(struct BProto_uint32_s);
                left -= sizeof(struct BProto_uint32_s);
            } break;
            case BPROTO_TYPE_UINT64: {
                ASSERT(left >= sizeof(struct BProto_uint64_s))
                struct BProto_uint64_s *val = (struct BProto_uint64_s *)(o->buf + o->c_start + o->c_pos);
                o->c_pos += sizeof(struct BProto_uint64_s);
                left -= sizeof(struct BProto_uint64_s);

                if (id == 7) {
                    *v = ltoh64(val->v);
                    return 1;
                }
            } break;
            case BPROTO_TYPE_DATA:
            case BPROTO_TYPE_CONSTDATA:
            {
                ASSERT(left >= sizeof(struct BProto_data_header_s))
                struct BProto_data_header_s *val = (struct BProto_data_header_s *)(o->buf + o->c_start + o->c_pos);
                o->c_pos += sizeof(struct BProto_data_header_s);
                left -= sizeof(struct BProto_data_header_s);

                uint32_t payload_len = ltoh32(val->len);
                ASSERT(left >= payload_len)
                uint8_t *payload = o->buf + o->c_start + o->c_pos;
                o->c_pos += payload_len;
                left -= payload_len;
            } break;
            default:
                ASSERT(0);
        }
    }

    return 0;
}

void msg1Parser_Resetc (msg1Parser *o)
{
    o->c_pos = 0;
}

void msg1Parser_Forwardc (msg1Parser *o)
{
    o->c_pos = o->c_span;
}

int msg1Parser_Getd (msg1Parser *o, uint16_t *v)
{
    ASSERT(o->d_pos >= 0)
    ASSERT(o->d_pos <= o->d_span)

    int left = o->d_span - o->d_pos;

    while (left > 0) {
        ASSERT(left >= sizeof(struct BProto_header_s))
        struct BProto_header_s *header = (struct BProto_header_s *)(o->buf + o->d_start + o->d_pos);
        o->d_pos += sizeof(struct BProto_header_s);
        left -= sizeof(struct BProto_header_s);
        uint16_t type = ltoh16(header->type);
        uint16_t id = ltoh16(header->id);

        switch (type) {
            case BPROTO_TYPE_UINT8: {
                ASSERT(left >= sizeof(struct BProto_uint8_s))
                struct BProto_uint8_s *val = (struct BProto_uint8_s *)(o->buf + o->d_start + o->d_pos);
                o->d_pos += sizeof(struct BProto_uint8_s);
                left -= sizeof(struct BProto_uint8_s);
            } break;
            case BPROTO_TYPE_UINT16: {
                ASSERT(left >= sizeof(struct BProto_uint16_s))
                struct BProto_uint16_s *val = (struct BProto_uint16_s *)(o->buf + o->d_start + o->d_pos);
                o->d_pos += sizeof(struct BProto_uint16_s);
                left -= sizeof(struct BProto_uint16_s);

                if (id == 8) {
                    *v = ltoh16(val->v);
                    return 1;
                }
            } break;
            case BPROTO_TYPE_UINT32: {
                ASSERT(left >= sizeof(struct BProto_uint32_s))
                struct BProto_uint32_s *val = (struct BProto_uint32_s *)(o->buf + o->d_start + o->d_pos);
                o->d_pos += sizeof(struct BProto_uint32_s);
                left -= sizeof(struct BProto_uint32_s);
            } break;
            case BPROTO_TYPE_UINT64: {
                ASSERT(left >= sizeof(struct BProto_uint64_s))
                struct BProto_uint64_s *val = (struct BProto_uint64_s *)(o->buf + o->d_start + o->d_pos);
                o->d_pos += sizeof(struct BProto_uint64_s);
                left -= sizeof(struct BProto_uint64_s);
            } break;
            case BPROTO_TYPE_DATA:
            case BPROTO_TYPE_CONSTDATA:
            {
                ASSERT(left >= sizeof(struct BProto_data_header_s))
                struct BProto_data_header_s *val = (struct BProto_data_header_s *)(o->buf + o->d_start + o->d_pos);
                o->d_pos += sizeof(struct BProto_data_header_s);
                left -= sizeof(struct BProto_data_header_s);

                uint32_t payload_len = ltoh32(val->len);
                ASSERT(left >= payload_len)
                uint8_t *payload = o->buf + o->d_start + o->d_pos;
                o->d_pos += payload_len;
                left -= payload_len;
            } break;
            default:
                ASSERT(0);
        }
    }

    return 0;
}

void msg1Parser_Resetd (msg1Parser *o)
{
    o->d_pos = 0;
}

void msg1Parser_Forwardd (msg1Parser *o)
{
    o->d_pos = o->d_span;
}

int msg1Parser_Gete (msg1Parser *o, uint8_t *v)
{
    ASSERT(o->e_pos >= 0)
    ASSERT(o->e_pos <= o->e_span)

    int left = o->e_span - o->e_pos;

    while (left > 0) {
        ASSERT(left >= sizeof(struct BProto_header_s))
        struct BProto_header_s *header = (struct BProto_header_s *)(o->buf + o->e_start + o->e_pos);
        o->e_pos += sizeof(struct BProto_header_s);
        left -= sizeof(struct BProto_header_s);
        uint16_t type = ltoh16(header->type);
        uint16_t id = ltoh16(header->id);

        switch (type) {
            case BPROTO_TYPE_UINT8: {
                ASSERT(left >= sizeof(struct BProto_uint8_s))
                struct BProto_uint8_s *val = (struct BProto_uint8_s *)(o->buf + o->e_start + o->e_pos);
                o->e_pos += sizeof(struct BProto_uint8_s);
                left -= sizeof(struct BProto_uint8_s);

                if (id == 9) {
                    *v = ltoh8(val->v);
                    return 1;
                }
            } break;
            case BPROTO_TYPE_UINT16: {
                ASSERT(left >= sizeof(struct BProto_uint16_s))
                struct BProto_uint16_s *val = (struct BProto_uint16_s *)(o->buf + o->e_start + o->e_pos);
                o->e_pos += sizeof(struct BProto_uint16_s);
                left -= sizeof(struct BProto_uint16_s);
            } break;
            case BPROTO_TYPE_UINT32: {
                ASSERT(left >= sizeof(struct BProto_uint32_s))
                struct BProto_uint32_s *val = (struct BProto_uint32_s *)(o->buf + o->e_start + o->e_pos);
                o->e_pos += sizeof(struct BProto_uint32_s);
                left -= sizeof(struct BProto_uint32_s);
            } break;
            case BPROTO_TYPE_UINT64: {
                ASSERT(left >= sizeof(struct BProto_uint64_s))
                struct BProto_uint64_s *val = (struct BProto_uint64_s *)(o->buf + o->e_start + o->e_pos);
                o->e_pos += sizeof(struct BProto_uint64_s);
                left -= sizeof(struct BProto_uint64_s);
            } break;
            case BPROTO_TYPE_DATA:
            case BPROTO_TYPE_CONSTDATA:
            {
                ASSERT(left >= sizeof(struct BProto_data_header_s))
                struct BProto_data_header_s *val = (struct BProto_data_header_s *)(o->buf + o->e_start + o->e_pos);
                o->e_pos += sizeof(struct BProto_data_header_s);
                left -= sizeof(struct BProto_data_header_s);

                uint32_t payload_len = ltoh32(val->len);
                ASSERT(left >= payload_len)
                uint8_t *payload = o->buf + o->e_start + o->e_pos;
                o->e_pos += payload_len;
                left -= payload_len;
            } break;
            default:
                ASSERT(0);
        }
    }

    return 0;
}

void msg1Parser_Resete (msg1Parser *o)
{
    o->e_pos = 0;
}

void msg1Parser_Forwarde (msg1Parser *o)
{
    o->e_pos = o->e_span;
}

int msg1Parser_Getf (msg1Parser *o, uint8_t **data, int *data_len)
{
    ASSERT(o->f_pos >= 0)
    ASSERT(o->f_pos <= o->f_span)

    int left = o->f_span - o->f_pos;

    while (left > 0) {
        ASSERT(left >= sizeof(struct BProto_header_s))
        struct BProto_header_s *header = (struct BProto_header_s *)(o->buf + o->f_start + o->f_pos);
        o->f_pos += sizeof(struct BProto_header_s);
        left -= sizeof(struct BProto_header_s);
        uint16_t type = ltoh16(header->type);
        uint16_t id = ltoh16(header->id);

        switch (type) {
            case BPROTO_TYPE_UINT8: {
                ASSERT(left >= sizeof(struct BProto_uint8_s))
                struct BProto_uint8_s *val = (struct BProto_uint8_s *)(o->buf + o->f_start + o->f_pos);
                o->f_pos += sizeof(struct BProto_uint8_s);
                left -= sizeof(struct BProto_uint8_s);
            } break;
            case BPROTO_TYPE_UINT16: {
                ASSERT(left >= sizeof(struct BProto_uint16_s))
                struct BProto_uint16_s *val = (struct BProto_uint16_s *)(o->buf + o->f_start + o->f_pos);
                o->f_pos += sizeof(struct BProto_uint16_s);
                left -= sizeof(struct BProto_uint16_s);
            } break;
            case BPROTO_TYPE_UINT32: {
                ASSERT(left >= sizeof(struct BProto_uint32_s))
                struct BProto_uint32_s *val = (struct BProto_uint32_s *)(o->buf + o->f_start + o->f_pos);
                o->f_pos += sizeof(struct BProto_uint32_s);
                left -= sizeof(struct BProto_uint32_s);
            } break;
            case BPROTO_TYPE_UINT64: {
                ASSERT(left >= sizeof(struct BProto_uint64_s))
                struct BProto_uint64_s *val = (struct BProto_uint64_s *)(o->buf + o->f_start + o->f_pos);
                o->f_pos += sizeof(struct BProto_uint64_s);
                left -= sizeof(struct BProto_uint64_s);
            } break;
            case BPROTO_TYPE_DATA:
            case BPROTO_TYPE_CONSTDATA:
            {
                ASSERT(left >= sizeof(struct BProto_data_header_s))
                struct BProto_data_header_s *val = (struct BProto_data_header_s *)(o->buf + o->f_start + o->f_pos);
                o->f_pos += sizeof(struct BProto_data_header_s);
                left -= sizeof(struct BProto_data_header_s);

                uint32_t payload_len = ltoh32(val->len);
                ASSERT(left >= payload_len)
                uint8_t *payload = o->buf + o->f_start + o->f_pos;
                o->f_pos += payload_len;
                left -= payload_len;

                if (type == BPROTO_TYPE_DATA && id == 10) {
                    *data = payload;
                    *data_len = payload_len;
                    return 1;
                }
            } break;
            default:
                ASSERT(0);
        }
    }

    return 0;
}

void msg1Parser_Resetf (msg1Parser *o)
{
    o->f_pos = 0;
}

void msg1Parser_Forwardf (msg1Parser *o)
{
    o->f_pos = o->f_span;
}

int msg1Parser_Getg (msg1Parser *o, uint8_t **data)
{
    ASSERT(o->g_pos >= 0)
    ASSERT(o->g_pos <= o->g_span)

    int left = o->g_span - o->g_pos;

    while (left > 0) {
        ASSERT(left >= sizeof(struct BProto_header_s))
        struct BProto_header_s *header = (struct BProto_header_s *)(o->buf + o->g_start + o->g_pos);
        o->g_pos += sizeof(struct BProto_header_s);
        left -= sizeof(struct BProto_header_s);
        uint16_t type = ltoh16(header->type);
        uint16_t id = ltoh16(header->id);

        switch (type) {
            case BPROTO_TYPE_UINT8: {
                ASSERT(left >= sizeof(struct BProto_uint8_s))
                struct BProto_uint8_s *val = (struct BProto_uint8_s *)(o->buf + o->g_start + o->g_pos);
                o->g_pos += sizeof(struct BProto_uint8_s);
                left -= sizeof(struct BProto_uint8_s);
            } break;
            case BPROTO_TYPE_UINT16: {
                ASSERT(left >= sizeof(struct BProto_uint16_s))
                struct BProto_uint16_s *val = (struct BProto_uint16_s *)(o->buf + o->g_start + o->g_pos);
                o->g_pos += sizeof(struct BProto_uint16_s);
                left -= sizeof(struct BProto_uint16_s);
            } break;
            case BPROTO_TYPE_UINT32: {
                ASSERT(left >= sizeof(struct BProto_uint32_s))
                struct BProto_uint32_s *val = (struct BProto_uint32_s *)(o->buf + o->g_start + o->g_pos);
                o->g_pos += sizeof(struct BProto_uint32_s);
                left -= sizeof(struct BProto_uint32_s);
            } break;
            case BPROTO_TYPE_UINT64: {
                ASSERT(left >= sizeof(struct BProto_uint64_s))
                struct BProto_uint64_s *val = (struct BProto_uint64_s *)(o->buf + o->g_start + o->g_pos);
                o->g_pos += sizeof(struct BProto_uint64_s);
                left -= sizeof(struct BProto_uint64_s);
            } break;
            case BPROTO_TYPE_DATA:
            case BPROTO_TYPE_CONSTDATA:
            {
                ASSERT(left >= sizeof(struct BProto_data_header_s))
                struct BProto_data_header_s *val = (struct BProto_data_header_s *)(o->buf + o->g_start + o->g_pos);
                o->g_pos += sizeof(struct BProto_data_header_s);
                left -= sizeof(struct BProto_data_header_s);

                uint32_t payload_len = ltoh32(val->len);
                ASSERT(left >= payload_len)
                uint8_t *payload = o->buf + o->g_start + o->g_pos;
                o->g_pos += payload_len;
                left -= payload_len;

                if (type == BPROTO_TYPE_CONSTDATA && id == 11) {
                    *data = payload;
                    return 1;
                }
            } break;
            default:
                ASSERT(0);
        }
    }

    return 0;
}

void msg1Parser_Resetg (msg1Parser *o)
{
    o->g_pos = 0;
}

void msg1Parser_Forwardg (msg1Parser *o)
{
    o->g_pos = o->g_span;
}

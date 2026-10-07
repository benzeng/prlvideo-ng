/* Parallels otg 私有传输层（RDPMC 超调用）—— 依 2017 驱动反编译复刻 */
#include <stdint.h>
struct hcall { uint64_t w[6]; };
void mon_side_call(struct hcall *h);
int  mon_check(uint32_t *ver, uint32_t *chunk);          /* 0x5f9e652 探测 */
struct otg_link { uint32_t chunk; int32_t status; uint32_t magic2; };
struct otg_io   { int32_t chan; uint32_t total; uint32_t off; int32_t status; };
int  otg_open(struct otg_link *l);                        /* 建链 */
int  otg_request(struct otg_link *l, void *buf, uint32_t send, uint32_t recv, uint32_t *actual);
void otg_cancel(struct otg_io *io);                       /* 0x5f9e655 关闭 */

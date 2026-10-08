
ulong FUN_100bd32d0(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 in_RAX;
  size_t sVar4;
  undefined8 uVar5;
  int local_24;
  
  sVar4 = (**(code **)(*(long *)(param_1 + 8) + 0x60))();
  local_24 = (int)((ulong)in_RAX >> 0x20);
  if (local_24 != 0) {
    lVar2 = *(long *)(param_1 + 0x80);
    if (*(int *)(lVar2 + 0x1c8) == 0) {
      FUN_100c62ee0(0x14,0x8c,0x9a,"s3_both.c",0x108);
      uVar5 = 10;
    }
    else {
      *(undefined4 *)(lVar2 + 0x1c8) = 0;
      iVar1 = *(int *)(lVar2 + 0x394);
      if ((long)iVar1 == sVar4) {
        iVar3 = FUN_100bf2f90(*(undefined8 *)(param_1 + 0x58),lVar2 + 0x314,sVar4);
        if (iVar3 == 0) {
          if (*(int *)(param_1 + 4) == 0x2000) {
            if (0x40 < iVar1) {
              FUN_100bf2cd0("s3_both.c",0x120,"i <= EVP_MAX_MD_SIZE");
            }
            _memcpy((void *)(*(long *)(param_1 + 0x80) + 0x420),
                    (void *)(*(long *)(param_1 + 0x80) + 0x314),sVar4);
            *(char *)(*(long *)(param_1 + 0x80) + 0x460) = (char)iVar1;
          }
          else {
            if (0x40 < iVar1) {
              FUN_100bf2cd0("s3_both.c",0x124,"i <= EVP_MAX_MD_SIZE");
            }
            _memcpy((void *)(*(long *)(param_1 + 0x80) + 0x461),
                    (void *)(*(long *)(param_1 + 0x80) + 0x314),sVar4);
            *(char *)(*(long *)(param_1 + 0x80) + 0x4a1) = (char)iVar1;
          }
          sVar4 = 1;
          goto LAB_100bd33c6;
        }
        FUN_100c62ee0(0x14,0x8c,0x95,"s3_both.c",0x118);
        uVar5 = 0x33;
      }
      else {
        FUN_100c62ee0(0x14,0x8c,0x6f,"s3_both.c",0x112);
        uVar5 = 0x32;
      }
    }
    FUN_100bd2dc0(param_1,2,uVar5);
    sVar4 = 0;
  }
LAB_100bd33c6:
  return sVar4 & 0xffffffff;
}



undefined8 FUN_100bf22e0(long param_1,byte *param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = (uint)*(byte *)(*(long *)(param_1 + 0x80) + 0x460);
  uVar5 = *(byte *)(*(long *)(param_1 + 0x80) + 0x4a1) + uVar4;
  if ((uVar4 == 0) && (uVar5 != 0)) {
    FUN_100bf2cd0("t1_reneg.c",0xf0,"!expected_len || s->s3->previous_client_finished_len");
  }
  if ((uVar5 != 0) && (*(char *)(*(long *)(param_1 + 0x80) + 0x4a1) == '\0')) {
    FUN_100bf2cd0("t1_reneg.c",0xf1,"!expected_len || s->s3->previous_server_finished_len");
  }
  if (param_3 < 1) {
    uVar6 = 0x150;
    uVar7 = 0xf6;
  }
  else {
    if (*param_2 + 1 == param_3) {
      if (*param_2 == uVar5) {
        lVar2 = *(long *)(param_1 + 0x80);
        bVar1 = *(byte *)(lVar2 + 0x460);
        iVar3 = _memcmp(param_2 + 1,(void *)(lVar2 + 0x420),(ulong)bVar1);
        if (iVar3 == 0) {
          iVar3 = _memcmp(param_2 + (ulong)bVar1 + 1,(void *)(lVar2 + 0x461),
                          (ulong)*(byte *)(lVar2 + 0x4a1));
          if (iVar3 == 0) {
            *(undefined4 *)(lVar2 + 0x4a4) = 1;
            return 1;
          }
          uVar6 = 0x151;
          uVar7 = 0x119;
          goto LAB_100bf23fb;
        }
        uVar6 = 0x110;
      }
      else {
        uVar6 = 0x108;
      }
      FUN_100c62ee0(0x14,0x12d,0x151,"t1_reneg.c",uVar6);
      *param_4 = 0x28;
      return 0;
    }
    uVar6 = 0x150;
    uVar7 = 0x100;
  }
LAB_100bf23fb:
  FUN_100c62ee0(0x14,0x12d,uVar6,"t1_reneg.c",uVar7);
  *param_4 = 0x2f;
  return 0;
}


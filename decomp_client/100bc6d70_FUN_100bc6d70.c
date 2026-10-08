
long FUN_100bc6d70(long param_1)

{
  byte bVar1;
  byte *pbVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int local_2c;
  
  if (*(int *)(*(long *)(param_1 + 0x80) + 0x4a8) == 0) {
    uVar5 = 0x164;
    uVar6 = 0xe03;
  }
  else {
    lVar3 = (**(code **)(*(long *)(param_1 + 8) + 0x60))(param_1,0x2210,0x2211,0x43,0x202,&local_2c)
    ;
    if (local_2c == 0) {
      return lVar3;
    }
    if (*(int *)(*(long *)(param_1 + 0x80) + 0x1c8) != 0) {
      if (1 < lVar3) {
        pbVar2 = *(byte **)(param_1 + 0x58);
        bVar1 = *pbVar2;
        uVar7 = (ulong)bVar1;
        if (((int)(bVar1 + 2) <= *(int *)(param_1 + 0x60)) &&
           (bVar1 + 2 + (uint)pbVar2[uVar7 + 1] == *(int *)(param_1 + 0x60))) {
          pvVar4 = (void *)FUN_100bf3540(uVar7,"s3_srvr.c",0xe35);
          *(void **)(param_1 + 0x278) = pvVar4;
          if (pvVar4 != (void *)0x0) {
            _memcpy(pvVar4,pbVar2 + 1,uVar7);
            *(byte *)(param_1 + 0x280) = bVar1;
            return 1;
          }
          FUN_100c62ee0(0x14,0x132,0x41,"s3_srvr.c",0xe37);
        }
      }
      *(undefined4 *)(param_1 + 0x48) = 5;
      return 0;
    }
    uVar5 = 0x163;
    uVar6 = 0xe17;
  }
  FUN_100c62ee0(0x14,0x132,uVar5,"s3_srvr.c",uVar6);
  *(undefined4 *)(param_1 + 0x48) = 5;
  return 0xffffffff;
}


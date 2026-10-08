
undefined8 FUN_100bf2110(long param_1,byte *param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_3 < 1) {
    uVar4 = 0x9a;
  }
  else {
    bVar1 = *param_2;
    if (bVar1 + 1 == param_3) {
      lVar2 = *(long *)(param_1 + 0x80);
      if (bVar1 == *(byte *)(lVar2 + 0x460)) {
        iVar3 = _memcmp(param_2 + 1,(void *)(lVar2 + 0x420),(ulong)bVar1);
        if (iVar3 == 0) {
          *(undefined4 *)(lVar2 + 0x4a4) = 1;
          return 1;
        }
        uVar4 = 0xb4;
      }
      else {
        uVar4 = 0xac;
      }
      FUN_100c62ee0(0x14,300,0x151,"t1_reneg.c",uVar4);
      *param_4 = 0x28;
      return 0;
    }
    uVar4 = 0xa4;
  }
  FUN_100c62ee0(0x14,300,0x150,"t1_reneg.c",uVar4);
  *param_4 = 0x2f;
  return 0;
}


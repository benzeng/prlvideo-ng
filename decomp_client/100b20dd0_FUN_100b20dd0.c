
undefined8
FUN_100b20dd0(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
             int param_6,int param_7,uint param_8,undefined4 param_9,undefined4 param_10,
             undefined8 param_11,undefined4 param_12)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(uint *)(lVar1 + 0x10) == param_8) {
    if (param_5 % (ulong)param_8 == 0) {
      uVar5 = *(uint *)(lVar1 + 8);
      if (*(ulong *)(lVar1 + 0x18) % (ulong)uVar5 == 0) {
        uVar2 = (ulong)((int)(param_5 / param_8) * uVar5) + *(ulong *)(lVar1 + 0x18);
        uVar4 = (uint)uVar2 & 0xfff;
        uVar5 = (param_7 - param_6) * uVar5 + 0xfff + uVar4 & 0xfffff000;
        pvVar3 = _valloc((ulong)uVar5);
        if (pvVar3 != (void *)0x0) {
          *param_2 = param_3;
          param_2[1] = param_4;
          param_2[2] = param_1;
          param_2[3] = pvVar3;
          param_2[4] = uVar2 & 0xfffffffffffff000;
          *(uint *)(param_2 + 5) = uVar5;
          *(uint *)((long)param_2 + 0x2c) = uVar4;
          *(int *)(param_2 + 6) = param_6;
          *(int *)((long)param_2 + 0x34) = param_7;
          *(undefined4 *)(param_2 + 7) = param_9;
          *(undefined4 *)((long)param_2 + 0x3c) = param_10;
          param_2[8] = param_11;
          *(undefined4 *)(param_2 + 9) = param_12;
          return 0;
        }
        FUN_100df99c0("","dimg",0,"Error: out of memory");
        return 0x80000002;
      }
      FUN_100df99c0("","dimg",0,"Error: bat offset is not aligned on element sz");
      uVar6 = 0x138;
    }
    else {
      FUN_100df99c0("","dimg",0,"Error: start %llu is not aligned on block");
      uVar6 = 0x133;
    }
  }
  else {
    FUN_100df99c0("","dimg",0,
                  "Error: block size of storage %u is not equal to block size of image %u",param_8);
    uVar6 = 0x12d;
  }
  FUN_100df99c0("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","0","StructuredBase.cpp",uVar6,
                "PrepareFillTableReq");
  return 0x80021011;
}



void FUN_10056cd00(long *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  if (-1 < param_2) {
    param_1[3] = (long)FUN_10056ce40;
    param_1[2] = (long)param_1;
    if (param_1 != (long *)0x0) {
      if ((long *)*param_1 == param_1) {
        lVar1 = param_1[4];
        puVar2 = *(undefined8 **)(lVar1 + 0x1240);
        *(long **)(lVar1 + 0x1240) = param_1;
        *param_1 = lVar1 + 0x1238;
        param_1[1] = (long)puVar2;
        *puVar2 = param_1;
      }
      else {
        FUN_1008e3970("","vdisk",0,"Error: CallOnWait: double cd_list_add");
        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","DiskStatesImp.cpp",
                      0x8c3,"CallOnWait");
      }
    }
    return;
  }
  FUN_1008e3970("","vdisk",0,"Error: group loading failed with 0x%x",param_2);
  lVar1 = param_1[5];
  uVar3 = *(uint *)(lVar1 + 8);
  if (param_2 == -0x7ffdefd8) {
    if ((uVar3 & 1) == 0) {
      FUN_10070b2d0(lVar1 + 0x50,0,*(undefined4 *)(lVar1 + 0x50));
      uVar3 = *(uint *)(lVar1 + 8);
    }
    uVar3 = uVar3 | 0x20;
  }
  else {
    uVar3 = uVar3 | 4;
  }
  *(uint *)(lVar1 + 8) = uVar3;
  FUN_10056ce40(param_1);
  FUN_10070aef0(lVar1,0xe);
  return;
}


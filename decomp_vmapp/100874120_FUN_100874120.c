
bool FUN_100874120(undefined8 param_1,long param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  char *local_48;
  
  if (param_4 == 2) {
    lVar6 = *(long *)(param_2 + 0x30);
    lVar7 = *(long *)(param_2 + 0x38);
    local_48 = "Private-Key";
  }
  else {
    lVar6 = 0;
    if (0 < param_4) {
      lVar6 = *(long *)(param_2 + 0x30);
    }
    local_48 = "DSA-Parameters";
    if (param_4 == 1) {
      local_48 = "Public-Key";
    }
    lVar7 = 0;
  }
  uVar2 = 0;
  if (*(long *)(param_2 + 0x18) != 0) {
    iVar1 = FUN_10084b410();
    uVar2 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    iVar1 = FUN_10084b410();
    uVar3 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
    if (uVar2 < uVar3) {
      uVar2 = uVar3;
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    iVar1 = FUN_10084b410();
    uVar3 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
    if (uVar2 < uVar3) {
      uVar2 = uVar3;
    }
  }
  if (lVar7 != 0) {
    iVar1 = FUN_10084b410(lVar7);
    uVar3 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
    if (uVar2 < uVar3) {
      uVar2 = uVar3;
    }
  }
  if (lVar6 != 0) {
    iVar1 = FUN_10084b410(lVar6);
    uVar3 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
    if (uVar2 < uVar3) {
      uVar2 = uVar3;
    }
  }
  lVar5 = FUN_10081ddd0(uVar2 + 10,"dsa_ameth.c",0x1be);
  if (lVar5 == 0) {
    FUN_100887ce0(10,0x68,0x41,"dsa_ameth.c",0x1c0);
    return false;
  }
  if (lVar7 != 0) {
    iVar1 = FUN_10087da20(param_1,param_3,0x80);
    bVar8 = false;
    if (iVar1 == 0) goto LAB_100874350;
    uVar4 = FUN_10084b410(*(undefined8 *)(param_2 + 0x18));
    bVar8 = false;
    iVar1 = FUN_100880ec0(param_1,"%s: (%d bit)\n",local_48,uVar4);
    if (iVar1 < 1) goto LAB_100874350;
  }
  iVar1 = FUN_1008a43f0(param_1,"priv:",lVar7,lVar5,param_3);
  bVar8 = false;
  if ((((iVar1 != 0) && (iVar1 = FUN_1008a43f0(param_1,"pub: ",lVar6,lVar5,param_3), iVar1 != 0)) &&
      (iVar1 = FUN_1008a43f0(param_1,"P:   ",*(undefined8 *)(param_2 + 0x18),lVar5,param_3),
      iVar1 != 0)) &&
     (iVar1 = FUN_1008a43f0(param_1,"Q:   ",*(undefined8 *)(param_2 + 0x20),lVar5,param_3),
     iVar1 != 0)) {
    iVar1 = FUN_1008a43f0(param_1,"G:   ",*(undefined8 *)(param_2 + 0x28),lVar5,param_3);
    bVar8 = iVar1 != 0;
  }
LAB_100874350:
  FUN_10081e1a0(lVar5);
  return bVar8;
}


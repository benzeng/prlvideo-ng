
void FUN_1004ee8e0(undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_38;
  int local_34;
  
  uVar6 = 0;
  lVar3 = FUN_1002a6120(param_1[1],0,1);
  lVar5 = *(long *)(param_2 + 8);
  uVar7 = 0;
  if (lVar5 != param_2) {
    uVar6 = 0;
    do {
      uVar7 = uVar6;
      iVar1 = FUN_1002a5a50(lVar3,uVar7,lVar5 + 0x20,4);
      iVar2 = FUN_1002a5a50(lVar3,iVar1 + uVar7,lVar5 + 0x10,4);
      iVar2 = iVar2 + iVar1 + uVar7;
      local_34 = *(int *)(*(long *)(lVar5 + 0x18) + 4) * 2;
      iVar1 = FUN_1002a5a50(lVar3,iVar2,&local_34,4);
      iVar1 = iVar1 + iVar2;
      uVar4 = QString::utf16();
      iVar2 = FUN_1002a5a50(lVar3,iVar1,uVar4,local_34);
      uVar6 = iVar2 + 3 + iVar1 & 0xfffffffc;
      lVar5 = *(long *)(lVar5 + 8);
    } while (lVar5 != param_2);
  }
  local_38 = 0;
  FUN_1002a5a50(lVar3,uVar7,&local_38,4);
  *(uint *)(lVar3 + 0x10) = uVar6;
  FUN_1004c07d0(*param_1,param_1[1],0);
  param_1[1] = 0;
  return;
}


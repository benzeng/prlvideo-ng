
bool FUN_1004d5df0(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint local_38;
  uint local_34;
  
  lVar3 = FUN_1002a6120(param_3,0,1);
  lVar5 = FUN_1002a6120(param_3,1,1);
  lVar2 = *param_2;
  uVar1 = *(uint *)(lVar2 + 4);
  local_38 = *(uint *)(param_2[1] + 4);
  iVar6 = -0xffffffd;
  local_34 = uVar1;
  if ((lVar3 != 0) && (lVar5 != 0)) {
    if ((*(uint *)(lVar3 + 8) < uVar1) || (*(uint *)(lVar5 + 8) < local_38)) {
      if ((3 < *(uint *)(lVar3 + 8)) && (3 < *(uint *)(lVar5 + 8))) {
        FUN_1002a5a50(lVar3,0,&local_34,4);
        *(undefined4 *)(lVar3 + 0x10) = 4;
        FUN_1002a5a50(lVar5,0,&local_38,4);
        *(undefined4 *)(lVar5 + 0x10) = 4;
        iVar6 = -0xffffff7;
      }
    }
    else {
      iVar6 = 0;
      FUN_1002a5a50(lVar3,0,lVar2 + *(long *)(lVar2 + 0x10),uVar1);
      uVar4 = local_38;
      *(uint *)(lVar3 + 0x10) = uVar1;
      FUN_1002a5a50(lVar5,0,param_2[1] + *(long *)(param_2[1] + 0x10),local_38);
      *(uint *)(lVar5 + 0x10) = uVar4;
    }
  }
  FUN_1004c07d0(*param_1,param_3,iVar6);
  return iVar6 == 0;
}


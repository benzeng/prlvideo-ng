
int FUN_100d48c00(undefined8 param_1,long param_2,long param_3,undefined4 param_4,int *param_5,
                 undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined8 uVar7;
  int iVar8;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar9;
  undefined8 local_38;
  
  while( true ) {
    if (param_2 == param_3) {
      return 0;
    }
    in_stack_ffffffffffffff98 =
         CONCAT44((int)((ulong)in_stack_ffffffffffffff98 >> 0x20),*(undefined4 *)(param_2 + 0x18));
    uVar4 = param_7;
    FUN_100df99c0("","PrlSdkUtils",0,"Setting %s hard disk stack index %s %u -> %s %u",param_6,
                  param_6,in_stack_ffffffffffffff98,param_7,*param_5);
    uVar6 = (undefined4)((ulong)uVar4 >> 0x20);
    iVar2 = _PrlVmDev_SetIfaceType(*(undefined8 *)(param_2 + 0x20),param_4);
    if (iVar2 < 0) break;
    iVar2 = _PrlVmDev_SetStackIndex(*(undefined8 *)(param_2 + 0x20),*param_5);
    uVar6 = (undefined4)((ulong)in_stack_ffffffffffffff98 >> 0x20);
    uVar9 = (undefined4)((ulong)in_stack_ffffffffffffffb0 >> 0x20);
    if (iVar2 < 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x18);
      iVar8 = *param_5;
      _PrlDbg_PrlResultToString(iVar2,&local_38);
      local_38 = CONCAT44(uVar9,iVar2);
      pcVar3 = "Error : Failed to set %s hard disk stack index %s %u -> %s %u error 0x%X \'%s\'";
      uVar4 = param_6;
      uVar5 = CONCAT44(uVar6,uVar1);
      uVar7 = param_7;
      goto LAB_100d48d4c;
    }
    *param_5 = *param_5 + 1;
    param_2 = QMapNodeBase::nextNode();
  }
  uVar9 = *(undefined4 *)(param_2 + 0x18);
  _PrlDbg_PrlResultToString(iVar2,&local_38);
  uVar7 = CONCAT44(uVar6,uVar9);
  pcVar3 = 
  "Error : Failed to change %s to %s hard disk iface type for %s stack index %u error 0x%X \'%s\'";
  uVar4 = param_7;
  uVar5 = param_6;
  iVar8 = iVar2;
LAB_100d48d4c:
  FUN_100df99c0("","PrlSdkUtils",0,pcVar3,param_6,uVar4,uVar5,uVar7,iVar8,local_38);
  return iVar2;
}


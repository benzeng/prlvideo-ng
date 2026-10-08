
int FUN_100b9aff0(long param_1,undefined4 param_2)

{
  long *******ppppppplVar1;
  long *plVar2;
  int iVar3;
  long *local_48;
  long ******local_40;
  long ******local_38;
  
  local_40 = (long ******)&local_40;
  local_38 = (long ******)&local_40;
  iVar3 = FUN_100b9dc70(&local_40,PTR_DAT_1022cfce0,1);
  ppppppplVar1 = (long *******)local_40;
  if (iVar3 == 0) {
    for (; ppppppplVar1 != &local_40; ppppppplVar1 = (long *******)*ppppppplVar1) {
      iVar3 = FUN_100b9b0f0(ppppppplVar1[3],param_2,&local_48);
      plVar2 = local_48;
      if (iVar3 == 0) {
        iVar3 = FUN_100b98ce0(local_48);
        if ((iVar3 != 0) || (iVar3 = FUN_100b987c0(plVar2,1), iVar3 != 0)) {
          FUN_100b9dff0(&local_40);
          FUN_100b98100(param_1);
          return iVar3;
        }
        plVar2[1] = *(long *)(param_1 + 8);
        *plVar2 = param_1;
        **(undefined8 **)(param_1 + 8) = plVar2;
        *(long **)(param_1 + 8) = plVar2;
      }
    }
    FUN_100b9dff0(&local_40);
    iVar3 = 0;
  }
  return iVar3;
}


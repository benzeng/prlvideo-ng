
void FUN_100a4d800(long param_1,long *param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  
  cVar4 = *(char *)(param_1 + 0x20);
  if ((param_3 < 4) || (bVar5 = cVar4 == '\0', cVar4 = '\0', bVar5)) {
    FUN_100df99c0("","OnConsoleClosingClient",0,"Wrong command from VM: size %u event %u",param_3,
                  cVar4);
    return;
  }
  iVar1 = **(int **)(*param_2 + 0x10);
  if (iVar1 == 3) {
    uVar3 = 0;
    uVar2 = 0x80000481;
    goto LAB_100a4d897;
  }
  if (iVar1 == 2) {
LAB_100a4d893:
    uVar3 = 0;
  }
  else {
    if (iVar1 != 1) {
      FUN_100df99c0("","OnConsoleClosingClient",0,"Unknown VM command ID: %d",iVar1,0);
      goto LAB_100a4d893;
    }
    uVar3 = 1;
  }
  uVar2 = 0;
LAB_100a4d897:
  FUN_100a4d9a0(param_1,uVar3,uVar2);
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}


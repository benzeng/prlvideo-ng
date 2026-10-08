
char * FUN_1006b0330(char *param_1,long param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  int iVar6;
  
  uVar3 = FUN_10018c280(*(undefined8 *)(param_2 + 0x20));
  uVar3 = FUN_100319c60(uVar3);
  lVar4 = FUN_10033c600(uVar3);
  iVar1 = *(int *)(lVar4 + 4);
  iVar6 = *(int *)(lVar4 + 8);
  uVar3 = FUN_10018c280(*(undefined8 *)(param_2 + 0x20));
  uVar3 = FUN_100319c50(uVar3);
  cVar2 = FUN_100330a50(uVar3);
  if (cVar2 == '\0') {
    iVar6 = iVar1;
  }
  if (iVar6 == 0) {
    ppuVar5 = &PTR_s_Show_Windows_Taskbar_10226e0f0;
  }
  else {
    ppuVar5 = &PTR_s_Hide_Windows_Taskbar_10226e0f8;
  }
  QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,(int)*ppuVar5);
  return param_1;
}


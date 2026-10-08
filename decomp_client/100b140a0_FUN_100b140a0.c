
undefined8 FUN_100b140a0(long *param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  
  (**(code **)(*param_1 + 0x100))();
  cVar2 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x150))
                    ((long)param_1 + *(long *)(*param_1 + -0x18));
  if (cVar2 != '\0') {
    FUN_100b13950(param_1);
    if ((*(char *)(*(long *)(*param_1 + -0x18) + 0x48 + (long)param_1) != '\0') &&
       ((*(byte *)(*(long *)(*param_1 + -0x18) + 0x18 + (long)param_1) & 2) != 0)) {
      plVar1 = (long *)param_1[4];
      *(undefined4 *)(plVar1 + 0xf) = 0x32326470;
      iVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
      if (iVar3 < 0) {
        FUN_100df99c0("","dimg",0,"m_Header.m_DiskInUse = 0x%X write failed",(int)plVar1[0xf]);
      }
    }
    (**(code **)(**(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1) + 0x28))();
  }
  (**(code **)(*param_1 + 0x70))(param_1,1);
  (**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x108))(param_1);
  QString::truncate((int)*(undefined8 *)(*param_1 + -0x18) + 0x10 + (int)param_1);
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 8))();
    param_1[4] = 0;
  }
  *(undefined1 *)(*(long *)(*param_1 + -0x18) + 0x48 + (long)param_1) = 0;
  *(undefined4 *)(*(long *)(*param_1 + -0x18) + 0x18 + (long)param_1) = 0;
  return 0;
}


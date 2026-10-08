
undefined8 FUN_100b2dd90(long *param_1)

{
  char cVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x100))();
  cVar1 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x150))
                    ((long)param_1 + *(long *)(*param_1 + -0x18));
  if (cVar1 != '\0') {
    if ((*(char *)(*(long *)(*param_1 + -0x18) + 0x48 + (long)param_1) != '\0') &&
       ((*(byte *)(*(long *)(*param_1 + -0x18) + 0x18 + (long)param_1) & 2) != 0)) {
      *(undefined1 *)(param_1 + 0x3028) = 0;
      iVar2 = FUN_100b25e80(param_1,param_1 + 0x301f,0x200);
      if (iVar2 < 0) {
        FUN_100df99c0("","dimg",0,"Error: signature write failed %x");
      }
    }
    (**(code **)(**(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1) + 0x28))();
  }
  (**(code **)(*param_1 + 0x70))(param_1,1);
  (**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x108))(param_1);
  QString::truncate((int)*(undefined8 *)(*param_1 + -0x18) + 0x10 + (int)param_1);
  ___bzero(param_1 + 0x301f,0x200);
  *(undefined1 *)(*(long *)(*param_1 + -0x18) + 0x48 + (long)param_1) = 0;
  *(undefined4 *)(*(long *)(*param_1 + -0x18) + 0x18 + (long)param_1) = 0;
  return 0;
}


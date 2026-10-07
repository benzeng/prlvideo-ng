
undefined8 FUN_1006c2230(uint param_1,QString *param_2)

{
  QString *pQVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint *local_38;
  
  local_38 = (uint *)PTR_shared_null_100ba2188;
  FUN_1006c2360(&local_38);
  if (1 < *local_38) {
    FUN_10027ab40(&local_38,local_38[1]);
  }
  puVar3 = local_38 + (long)(int)local_38[2] * 2 + 4;
  puVar2 = local_38;
  do {
    if (1 < *puVar2) {
      FUN_10027ab40(&local_38,puVar2[1]);
      puVar2 = local_38;
    }
    uVar4 = 0x80000016;
    if (puVar3 == puVar2 + (long)(int)puVar2[3] * 2 + 4) goto LAB_1006c231d;
    pQVar1 = *(QString **)puVar3;
    puVar3 = puVar3 + 2;
  } while (*(uint *)&pQVar1[3].field0_0x0 != (param_1 | 0x10000000));
  QString::operator=(param_2,pQVar1);
  QString::operator=(param_2 + 1,pQVar1 + 1);
  QString::operator=(param_2 + 2,pQVar1 + 2);
  *(undefined1 *)((long)&param_2[3].field0_0x0 + 4) =
       *(undefined1 *)((long)&pQVar1[3].field0_0x0 + 4);
  *(undefined4 *)&param_2[3].field0_0x0 = *(undefined4 *)&pQVar1[3].field0_0x0;
  QString::operator=(param_2 + 4,pQVar1 + 4);
  *(undefined2 *)&param_2[6].field0_0x0 = *(undefined2 *)&pQVar1[6].field0_0x0;
  param_2[5].field0_0x0 = pQVar1[5].field0_0x0;
  uVar4 = 0;
LAB_1006c231d:
  FUN_10027a3f0(&local_38);
  return uVar4;
}


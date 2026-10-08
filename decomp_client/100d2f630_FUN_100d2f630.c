
undefined8 * FUN_100d2f630(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  QArrayData *local_28;
  undefined1 local_1b;
  
  local_28 = (QArrayData *)QString::fromAscii_helper("\n",1);
  iVar2 = QString::indexOf(param_1,&local_28,0,1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1b = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1b) goto LAB_100d2f698;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100d2f698:
  puVar3 = (undefined8 *)0x0;
  if (iVar2 == -1) {
    puVar3 = operator_new(0x10);
    *puVar3 = &PTR_FUN_10225b780;
    piVar1 = (int *)*param_1;
    puVar3[1] = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  return puVar3;
}



undefined1 FUN_100daeee0(long param_1,undefined4 param_2,QString *param_3)

{
  char *pcVar1;
  int *piVar2;
  undefined8 *puVar3;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  piVar2 = ___error();
  *piVar2 = 0;
  puVar3 = (undefined8 *)_getpwuid(param_2);
  if (puVar3 == (undefined8 *)0x0) {
    piVar2 = ___error();
    FUN_100df99c0("","CAuth",0,"Couldn\'t to find user with id %d, err = %d",param_2,*piVar2);
    return 0;
  }
  pcVar1 = (char *)*puVar3;
  if (pcVar1 != (char *)0x0) {
    _strlen(pcVar1);
  }
  QString::fromUtf8_helper((char *)&local_48,(int)pcVar1);
  QString::normalized(&local_40,&local_48,1,0);
  QString::operator=(param_3,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100daef94;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100daef94:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) goto LAB_100daefc8;
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100daefc8:
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((long)puVar3 + 0x14);
  return 1;
}


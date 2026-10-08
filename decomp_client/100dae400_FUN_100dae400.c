
undefined8 FUN_100dae400(undefined8 param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  QArrayData *local_40;
  
  _setgrent();
  lVar3 = _getgrgid(param_2);
  if (lVar3 == 0) {
LAB_100dae4a4:
    _endgrent();
    uVar4 = 0;
  }
  else {
    puVar5 = *(undefined8 **)(lVar3 + 0x18);
    do {
      if ((puVar5 == (undefined8 *)0x0) || (pcVar1 = (char *)*puVar5, pcVar1 == (char *)0x0))
      goto LAB_100dae4a4;
      QString::toUtf8();
      iVar2 = _strcmp(pcVar1,(char *)(local_40 + *(long *)(local_40 + 0x10)));
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          if (*(int *)local_40 != 0) goto LAB_100dae492;
        }
        QArrayData::deallocate(local_40,1,8);
      }
LAB_100dae492:
      puVar5 = puVar5 + 1;
    } while (iVar2 != 0);
    _endgrent();
    uVar4 = 1;
  }
  return uVar4;
}


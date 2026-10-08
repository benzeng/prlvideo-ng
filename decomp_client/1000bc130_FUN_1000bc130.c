
undefined8 FUN_1000bc130(undefined8 param_1,undefined8 param_2,QString *param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  QString local_40;
  undefined1 local_31;
  
  CVmTools::getVmSharing();
  lVar3 = CVmSharing::getHostSharing();
  if (*(int *)(*(long *)(lVar3 + 0xa8) + 8) < *(int *)(*(long *)(lVar3 + 0xa8) + 0xc)) {
    lVar4 = 0;
    do {
      CVmSharedFolder::getName();
      cVar2 = operator==(param_3,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000bc1cf;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_1000bc1cf:
      lVar1 = *(long *)(lVar3 + 0xa8);
      if (cVar2 != '\0') {
        return *(undefined8 *)(lVar1 + 0x10 + (*(int *)(lVar1 + 8) + lVar4) * 8);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < (long)*(int *)(lVar1 + 0xc) - (long)*(int *)(lVar1 + 8));
  }
  return 0;
}



void FUN_10073b300(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 *puVar3;
  QArrayData *local_38;
  QArrayData *local_30;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_100154930(uVar1,param_1 + 8,param_1);
  if (lVar2 != 0) {
    return;
  }
  if (DAT_10230ffd0 < 1) goto LAB_10073b3f6;
  QString::toUtf8();
  lVar2 = *(long *)(local_30 + 0x10);
  QString::toUtf8();
  FUN_100df99c0("CVSRC","prl_client_app",1,"Bad vmId=\"%s\"/\"%s\"",local_30 + lVar2,
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_10073b3c6;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_10073b3c6:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_10073b3f6;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10073b3f6:
  puVar3 = (undefined4 *)___cxa_allocate_exception(4);
  *puVar3 = 0x80000003;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar3,PTR_typeinfo_1021e1790,0);
}


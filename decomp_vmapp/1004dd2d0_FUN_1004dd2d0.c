
undefined8 * FUN_1004dd2d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  QFileInfo *this;
  long lVar4;
  Data *local_40;
  undefined1 local_32;
  
  iVar1 = QString::indexOf(param_3,0x2a,0,1);
  if ((iVar1 == -1) && (iVar1 = QString::indexOf(param_3,0x3f,0,1), iVar1 == -1)) {
    FUN_1004dc7d0(&local_40,param_2,param_3,param_4);
    puVar3 = operator_new(0x18);
    *puVar3 = &PTR_FUN_100bc3758;
    FUN_10005a020(puVar3 + 1,&local_40);
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_100bc36e8;
    *param_1 = puVar3;
    if (*(int *)local_40 == -1) {
      return param_1;
    }
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_32 = 0;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar4 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      this = (QFileInfo *)(local_40 + (long)iVar1 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(this);
        this = this + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(local_40);
    return param_1;
  }
  pvVar2 = operator_new(0x28);
  FUN_1004dd6c0(pvVar2,param_2,param_3,param_4 & 1);
  *param_1 = pvVar2;
  return param_1;
}


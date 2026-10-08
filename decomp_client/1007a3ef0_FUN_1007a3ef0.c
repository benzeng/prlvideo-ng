
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

QPixmap * FUN_1007a3ef0(double param_1,QPixmap *param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  undefined8 local_60;
  QPixmap local_58 [32];
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_28 = *(QArrayData **)(param_4 + 0x18);
  if (1 < *(int *)local_28 + 1U) {
    LOCK();
    *(int *)local_28 = *(int *)local_28 + 1;
    local_19 = *(int *)local_28 != 0;
    UNLOCK();
  }
  QPixmap::QPixmap(param_2);
  QPixmap::load(param_2,&local_28,0,0);
  cVar1 = QPixmap::isNull();
  if (cVar1 == '\0') goto LAB_1007a3fd9;
  QString::toLatin1();
  QByteArray::fromBase64((QByteArray *)&local_30);
  QPixmap::loadFromData
            (param_2,local_30 + *(long *)(local_30 + 0x10),*(undefined4 *)(local_30 + 4),0,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007a3fa9;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_1007a3fa9:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007a3fd9;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1007a3fd9:
  cVar1 = QPixmap::isNull();
  if (cVar1 == '\0') {
    dVar4 = DAT_100e29dc8 * param_1;
    if (0.0 <= dVar4) {
      iVar2 = (int)(dVar4 + DAT_100e110f0);
    }
    else {
      iVar2 = (int)((dVar4 - (double)(int)(DAT_100e110e0 + dVar4)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + dVar4);
    }
    param_1 = param_1 * _DAT_100e29dd0;
    if (0.0 <= param_1) {
      iVar3 = (int)(param_1 + DAT_100e110f0);
    }
    else {
      iVar3 = (int)((param_1 - (double)(int)(DAT_100e110e0 + param_1)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + param_1);
    }
    local_60 = CONCAT44(iVar3,iVar2);
    QPixmap::scaled(local_58,param_2,&local_60,0,1);
    QPixmap::operator=(param_2,local_58);
    QPixmap::~QPixmap(local_58);
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_2;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_2;
}


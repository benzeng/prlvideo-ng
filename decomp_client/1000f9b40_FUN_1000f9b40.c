
void FUN_1000f9b40(QByteArray *param_1,undefined8 param_2,undefined8 *param_3,byte param_4,
                  undefined4 param_5,undefined4 param_6,long param_7,uint param_8)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  Data *pDVar6;
  Data *pDVar7;
  uint uVar8;
  QPixmap local_118 [32];
  QPixmap local_f8 [32];
  QPixmap local_d8 [32];
  undefined8 local_b8;
  Data *local_b0;
  Data *local_a8;
  Data *local_a0;
  Data *local_98;
  int local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined1 local_31;
  
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
  local_78 = *param_3;
  uStack_70 = param_3[1];
  uStack_60 = (ulong)param_4 << 0x20;
  local_68 = CONCAT44(param_6,param_5);
  cVar2 = QKeySequence::isEmpty();
  if (cVar2 == '\0') {
    uVar3 = QKeySequence::operator[](param_8);
    uVar5 = uVar3 & 0x1ffffff;
    uVar8 = uVar5 | 0x20;
    if (0x19 < uVar5 - 0x41) {
      uVar8 = uVar5;
    }
    local_58 = CONCAT44(local_58._4_4_,uVar8);
    uStack_60 = CONCAT44(uStack_60._4_4_,uVar3) & 0xfffffffffe000000;
  }
  QString::toUtf8();
  uStack_40 = CONCAT44(*(undefined4 *)(local_80 + 4),(undefined4)uStack_40);
  local_88 = (QArrayData *)PTR_shared_null_1021e1288;
  if ((param_7 != 0) && (cVar2 = QIcon::isNull(), cVar2 == '\0')) {
    local_68 = local_68 | 0x2000;
    QIcon::availableSizes(&local_b0,param_7,0,1);
    local_a8 = local_b0;
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 == 0) {
        QListData::detach((int)&local_a8);
        iVar1 = *(int *)(local_a8 + 8);
        if (iVar1 != *(int *)(local_a8 + 0xc)) {
          pDVar6 = local_b0 + (long)*(int *)(local_b0 + 8) * 8 + 0x10;
          pDVar7 = local_a8 + (long)iVar1 * 8 + 0x10;
          lVar4 = (long)*(int *)(local_a8 + 0xc) * 8 + (long)iVar1 * -8;
          do {
            *(undefined8 *)pDVar7 = *(undefined8 *)pDVar6;
            pDVar7 = pDVar7 + 8;
            pDVar6 = pDVar6 + 8;
            lVar4 = lVar4 + -8;
          } while (lVar4 != 0);
        }
      }
      else {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + 1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
      }
    }
    local_a0 = local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10;
    local_98 = local_a8 + (long)*(int *)(local_a8 + 0xc) * 8 + 0x10;
    local_90 = 1;
    if (*(int *)local_b0 == -1) {
LAB_1000f9d26:
      if (local_a0 != local_98) {
        do {
          local_b8 = *(undefined8 *)local_a0;
          QIcon::pixmap(local_d8,param_7,&local_b8,0,0);
          QPixmap::QPixmap(local_f8,local_d8);
          FUN_1000f9ff0(local_f8,&local_88);
          QPixmap::~QPixmap(local_f8);
          QPixmap::hiDpiPixmap();
          FUN_1000f9ff0(local_118,&local_88);
          QPixmap::~QPixmap(local_118);
          QPixmap::~QPixmap(local_d8);
          local_a0 = local_a0 + 8;
          local_90 = 1;
        } while (local_a0 != local_98);
      }
    }
    else {
      if (*(int *)local_b0 == 0) {
LAB_1000f9d0d:
        QListData::dispose(local_b0);
      }
      else {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if (!(bool)local_31) goto LAB_1000f9d0d;
      }
      if (local_90 != 0) goto LAB_1000f9d26;
    }
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000f9e21;
      }
      QListData::dispose(local_a8);
    }
LAB_1000f9e21:
    uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)(local_88 + 4));
  }
  QByteArray::append((char *)param_1,(int)&local_78);
  QByteArray::append((char)&local_80);
  QByteArray::append(param_1);
  if (*(int *)(local_88 + 4) != 0) {
    QByteArray::append(param_1);
  }
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f9e99;
    }
    QArrayData::deallocate(local_88,1,8);
  }
LAB_1000f9e99:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      if (*(int *)local_80 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_80,1,8);
  }
  return;
}


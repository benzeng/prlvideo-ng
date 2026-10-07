
/* WARNING: Removing unreachable block (ram,0x000100601cf7) */
/* WARNING: Removing unreachable block (ram,0x000100601d11) */

undefined4 FUN_100601bb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  QString *pQVar2;
  uint uVar3;
  QString local_80;
  QString local_78;
  QFileInfo local_70 [8];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined *local_48;
  undefined1 local_31;
  
  local_68._8_4_ = (int)PTR_shared_null_100ba20d0;
  local_68._0_8_ = PTR_shared_null_100ba20d0;
  local_68._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  local_58 = 0;
  local_48 = PTR_shared_null_100ba2188;
  local_4c = 0;
  local_50 = 3;
  uVar3 = 0;
  do {
    uVar1 = (**(code **)(*(long *)*param_1 + 0x348))();
    if (uVar1 <= uVar3) {
      FUN_100603280(local_68);
      return 0;
    }
    FUN_100601990(&local_78,param_1,param_2,uVar3);
    QFileInfo::QFileInfo(local_70,&local_78);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100601c82;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_100601c82:
    local_58 = QFileInfo::size();
    QFileInfo::absoluteFilePath();
    pQVar2 = (QString *)QString::operator=((QString *)(local_68 + 8),&local_80);
    QString::operator=((QString *)local_68,pQVar2);
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100601ce3;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
LAB_100601ce3:
    FUN_100602b40(param_3,local_68);
    QFileInfo::~QFileInfo(local_70);
    uVar3 = uVar3 + 1;
  } while( true );
}


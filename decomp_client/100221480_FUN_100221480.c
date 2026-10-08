
void FUN_100221480(long *param_1,undefined8 param_2,int param_3)

{
  QVariant local_30;
  QArrayData *local_20;
  undefined1 local_11;
  
  if (param_3 == 1) {
    local_20 = (QArrayData *)QString::fromAscii_helper("Settings.Runtime.OptimizeModifiers",0x22);
    QVariant::QVariant(&local_30,2);
    FUN_10008d1b0(param_1 + 0xc,&local_20,&local_30);
    QVariant::~QVariant(&local_30);
    if (*(int *)local_20 != -1) {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        local_11 = *(int *)local_20 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1002214fe;
      }
      QArrayData::deallocate(local_20,2,8);
    }
  }
LAB_1002214fe:
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}



void FUN_100859f60(undefined8 param_1,int param_2,int param_3,undefined8 *param_4)

{
  QVariant local_20;
  
  if (param_2 == 0 && param_3 == 0) {
    FUN_10075b330(&local_20,param_1,*(undefined8 *)param_4[1],param_4[2]);
    if ((QVariant *)*param_4 != (QVariant *)0x0) {
      QVariant::operator=((QVariant *)*param_4,&local_20);
    }
    QVariant::~QVariant(&local_20);
  }
  return;
}



void FUN_1004dea80(QWidget *param_1)

{
  undefined *puVar1;
  QVBoxLayout *this;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  QVariant local_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  this = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this,param_1);
  QBoxLayout::addWidget(this,*(undefined8 *)(param_1 + 0x50),0,0);
  QLayout::contentsMargins();
  _local_30 = CONCAT44(extraout_var,0x14);
  _local_28 = CONCAT44(extraout_var_00,0x14);
  QLayout::setContentsMargins((QMargins *)this);
  QBoxLayout::setSpacing((int)this);
  puVar1 = PTR_s_nsStandardAction_102270ee8;
  QVariant::QVariant(&local_40,"NSPreferencesGeneral");
  QObject::setProperty((char *)param_1,(QVariant *)puVar1);
  QVariant::~QVariant(&local_40);
  return;
}


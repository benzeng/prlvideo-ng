
void FUN_10023d400(QObject *param_1)

{
  QObject *pQVar1;
  
  if (DAT_102310858 == (QObject *)0x0) {
    pQVar1 = operator_new(0x18);
    FUN_10005ea90(pQVar1);
    DAT_1022738a8 = 1;
    DAT_102310858 = pQVar1;
  }
  QObject::disconnect(DAT_102310858,"2exposeActiveChanged(bool)",param_1,
                      "1onExposeActivityChanged(bool)");
                    /* WARNING: Could not recover jumptable at 0x00010023d46d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0xb0))(param_1,0);
  return;
}


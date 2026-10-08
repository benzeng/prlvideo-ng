
void FUN_10076a2d0(QObject *param_1,QObject *param_2)

{
  QObject::disconnect(param_2,(char *)0x0,param_1,(char *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00010076a300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x80))(param_1,param_2);
  return;
}


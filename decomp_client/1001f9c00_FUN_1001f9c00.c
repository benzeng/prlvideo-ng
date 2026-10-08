
void FUN_1001f9c00(QObject *param_1,undefined4 param_2)

{
  QObject *pQVar1;
  
  pQVar1 = (QObject *)QObject::sender();
  QObject::disconnect(pQVar1,"2valueFetchFinished(PRL_RESULT)",param_1,
                      "1onDiskSpaceUsageFetchFinished(PRL_RESULT)");
                    /* WARNING: Could not recover jumptable at 0x0001001f9c3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0xb0))(param_1,param_2);
  return;
}


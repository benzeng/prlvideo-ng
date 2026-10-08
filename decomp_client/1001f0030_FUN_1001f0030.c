
void FUN_1001f0030(long *param_1)

{
  if (((param_1[7] != 0) && (*(int *)(param_1[7] + 4) != 0)) && (param_1[8] != 0)) {
    QObject::deleteLater();
  }
  if (((param_1[5] != 0) && (*(int *)(param_1[5] + 4) != 0)) && (param_1[6] != 0)) {
    CSdkRequest::cancel();
  }
                    /* WARNING: Could not recover jumptable at 0x0001001f008b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1,0x80000009);
  return;
}



void FUN_1001be2e0(QObject *param_1)

{
  long in_RAX;
  undefined8 uVar1;
  QObject *pQVar2;
  long local_18;
  
  local_18 = in_RAX;
  uVar1 = FUN_100152280();
  uVar1 = FUN_1001554a0(uVar1);
  FUN_10015aa50(&local_18,uVar1);
  if (local_18 != 0) {
    _PrlHandle_Free();
    uVar1 = FUN_100152280();
    pQVar2 = (QObject *)FUN_1001554a0(uVar1);
    QObject::disconnect(pQVar2,"2userProfileChanged(const CDispUser&)",param_1,
                        "1onUserProfileChanged()");
    FUN_1001bd750(param_1);
  }
  return;
}


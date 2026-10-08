
undefined8 FUN_1006aa9e0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  CAppUpdateLogic *this;
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001554a0(uVar2);
  puVar1 = PTR_m_instance_1021e1340;
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(long *)PTR_m_instance_1021e1340 == 0) {
      this = operator_new(0x18);
      CAppUpdateLogic::CAppUpdateLogic(this);
      *(CAppUpdateLogic **)puVar1 = this;
      DAT_102274b28 = 1;
    }
    uVar2 = CAppUpdateLogic::isUpdatesAvailableInUI();
  }
  return uVar2;
}


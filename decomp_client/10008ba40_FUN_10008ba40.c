
undefined8 * FUN_10008ba40(undefined8 *param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = *(long *)(param_2 + 0x10);
  if (((*(long *)(lVar1 + 0x20) == 0) || (*(int *)(*(long *)(lVar1 + 0x20) + 4) == 0)) ||
     (*(long *)(lVar1 + 0x28) == 0)) {
    if (((*(long *)(lVar1 + 0x30) == 0) || (*(int *)(*(long *)(lVar1 + 0x30) + 4) == 0)) ||
       (*(long *)(lVar1 + 0x38) == 0)) {
      if (*(undefined8 **)(lVar1 + 0x40) == (undefined8 *)0x0) {
        *param_1 = PTR_shared_null_1021e1288;
      }
      else {
        piVar2 = (int *)**(undefined8 **)(lVar1 + 0x40);
        *param_1 = piVar2;
        if (1 < *piVar2 + 1U) {
          LOCK();
          *piVar2 = *piVar2 + 1;
          UNLOCK();
        }
      }
    }
    else {
      CAppliance::getApplianceId();
    }
  }
  else {
    FUN_100188480(param_1);
  }
  return param_1;
}


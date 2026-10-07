
void FUN_1001a0fd7(undefined8 *param_1,long param_2)

{
  xmlHashTablePtr pxVar1;
  
  if (param_2 != 0) {
    FUN_1001a0897(param_1,param_2);
    if ((*(long *)(param_2 + 0x50) == 0) || (*(long *)(*(long *)(param_2 + 0x50) + 0x60) == 0)) {
      _fwrite("No entities in internal subset\n",1,0x1f,(FILE *)*param_1);
    }
    else {
      pxVar1 = *(xmlHashTablePtr *)(*(long *)(param_2 + 0x50) + 0x60);
      if (*(int *)(param_1 + 0x12) == 0) {
        _fwrite("Entities in internal subset\n",1,0x1c,(FILE *)*param_1);
      }
      _xmlHashScan(pxVar1,FUN_1001a0d68,param_1);
    }
    if ((*(long *)(param_2 + 0x58) == 0) || (*(long *)(*(long *)(param_2 + 0x58) + 0x60) == 0)) {
      if (*(int *)(param_1 + 0x12) == 0) {
        _fwrite("No entities in external subset\n",1,0x1f,(FILE *)*param_1);
      }
    }
    else {
      pxVar1 = *(xmlHashTablePtr *)(*(long *)(param_2 + 0x58) + 0x60);
      if (*(int *)(param_1 + 0x12) == 0) {
        _fwrite("Entities in external subset\n",1,0x1c,(FILE *)*param_1);
      }
      _xmlHashScan(pxVar1,FUN_1001a0d68,param_1);
    }
  }
  return;
}


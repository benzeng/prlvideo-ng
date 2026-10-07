
bool FUN_100188854(void *param_1,undefined8 *param_2)

{
  bool bVar1;
  
  bVar1 = *(long *)((long)param_1 + 0x10) != param_2[1];
  if (!bVar1) {
    _xmlListRemoveFirst((xmlListPtr)*param_2,param_1);
  }
  return bVar1;
}


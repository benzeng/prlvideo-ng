
void FUN_1008789d8(long param_1,xmlChar *param_2,xmlChar *param_3,int param_4)

{
  xmlHashTablePtr pxVar1;
  
  if (*(long *)(param_1 + 0x228) == 0) {
    pxVar1 = _xmlHashCreateDict(10,*(xmlDictPtr *)(param_1 + 0x1c8));
    *(xmlHashTablePtr *)(param_1 + 0x228) = pxVar1;
    if (*(long *)(param_1 + 0x228) == 0) {
      _xmlErrMemory(param_1,0);
      return;
    }
  }
  _xmlHashAddEntry2(*(xmlHashTablePtr *)(param_1 + 0x228),param_2,param_3,(void *)(long)param_4);
  return;
}


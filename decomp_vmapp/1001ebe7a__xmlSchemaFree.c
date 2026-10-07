
void _xmlSchemaFree(long param_1)

{
  xmlGenericErrorFunc pxVar1;
  long *plVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  int local_1c;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x98) != 0) {
      ppxVar3 = ___xmlGenericError();
      pxVar1 = *ppxVar3;
      ppvVar4 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar4,"Unimplemented block at %s:%d\n","xmlschemas.c",0xe4e);
    }
    if (*(long *)(param_1 + 0x58) != 0) {
      _xmlHashFree(*(xmlHashTablePtr *)(param_1 + 0x58),(xmlHashDeallocator)0x0);
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      _xmlHashFree(*(xmlHashTablePtr *)(param_1 + 0x40),(xmlHashDeallocator)0x0);
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      _xmlHashFree(*(xmlHashTablePtr *)(param_1 + 0x48),(xmlHashDeallocator)0x0);
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      _xmlHashFree(*(xmlHashTablePtr *)(param_1 + 0x50),(xmlHashDeallocator)0x0);
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      _xmlHashFree(*(xmlHashTablePtr *)(param_1 + 0x38),(xmlHashDeallocator)0x0);
    }
    if (*(long *)(param_1 + 0x70) != 0) {
      _xmlHashFree(*(xmlHashTablePtr *)(param_1 + 0x70),(xmlHashDeallocator)0x0);
    }
    if (*(long *)(param_1 + 0x90) != 0) {
      _xmlHashFree(*(xmlHashTablePtr *)(param_1 + 0x90),(xmlHashDeallocator)0x0);
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      _xmlHashFree(*(xmlHashTablePtr *)(param_1 + 0x60),FUN_1001eb135);
    }
    if (*(long *)(param_1 + 0x80) != 0) {
      plVar2 = *(long **)(param_1 + 0x80);
      for (local_1c = 0; local_1c < (int)plVar2[1]; local_1c = local_1c + 1) {
        FUN_1001eb135(*(undefined8 *)(*plVar2 + (long)local_1c * 8));
      }
      FUN_1001eb0f1(plVar2);
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_1001eb5fe(*(undefined8 *)(param_1 + 0x28));
    }
    _xmlDictFree(*(xmlDictPtr *)(param_1 + 0x78));
    (*(code *)_xmlFree)(param_1);
  }
  return;
}


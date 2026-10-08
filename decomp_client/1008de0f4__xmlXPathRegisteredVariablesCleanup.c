
void _xmlXPathRegisteredVariablesCleanup(long param_1)

{
  if (param_1 != 0) {
    _xmlHashFree(*(xmlHashTablePtr *)(param_1 + 0x18),_xmlXPathFreeObject);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}


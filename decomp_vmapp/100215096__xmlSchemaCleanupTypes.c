
void _xmlSchemaCleanupTypes(void)

{
  long lVar1;
  
  if (DAT_1011b8798 != 0) {
    _xmlSchemaFreeWildcard(*(undefined8 *)(DAT_1011b87b0 + 0x98));
    lVar1 = *(long *)(DAT_1011b87b0 + 0x38);
    _xmlSchemaFreeWildcard(*(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x18) + 0x18) + 0x18));
    (*(code *)_xmlFree)(*(undefined8 *)(*(long *)(lVar1 + 0x18) + 0x18));
    (*(code *)_xmlFree)(*(undefined8 *)(lVar1 + 0x18));
    (*(code *)_xmlFree)(lVar1);
    *(undefined8 *)(DAT_1011b87b0 + 0x38) = 0;
    _xmlHashFree(DAT_1011b87a0,_xmlSchemaFreeType);
    DAT_1011b8798 = 0;
  }
  return;
}


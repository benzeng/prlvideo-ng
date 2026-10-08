
void _xmlSchemaInitTypes(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  
  if (DAT_102313518 == 0) {
    DAT_102313520 = _xmlHashCreate(0x28);
    DAT_102313530 = FUN_100947f81("anyType",0x2d,0);
    *(long *)(DAT_102313530 + 0x70) = DAT_102313530;
    *(undefined4 *)(DAT_102313530 + 0x5c) = 3;
    *(undefined4 *)(DAT_102313530 + 0x5c) = 3;
    lVar1 = FUN_10094812c();
    if (lVar1 != 0) {
      *(long *)(DAT_102313530 + 0x38) = lVar1;
      puVar2 = (undefined8 *)(*(code *)_xmlMalloc)(0x28);
      if (puVar2 == (undefined8 *)0x0) {
        FUN_100947ea4(0,"allocating model group component");
      }
      else {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        *(undefined4 *)puVar2 = 6;
        *(undefined8 **)(lVar1 + 0x18) = puVar2;
        lVar1 = FUN_10094812c();
        if (lVar1 != 0) {
          *(undefined4 *)(lVar1 + 0x20) = 0;
          *(undefined4 *)(lVar1 + 0x24) = 0x40000000;
          puVar2[3] = lVar1;
          puVar3 = (undefined4 *)(*(code *)_xmlMalloc)(0x48);
          if (puVar3 == (undefined4 *)0x0) {
            FUN_100947ea4(0,"allocating wildcard component");
          }
          else {
            _memset(puVar3,0,0x48);
            *puVar3 = 2;
            puVar3[0xb] = 1;
            puVar3[8] = 1;
            puVar3[9] = 1;
            puVar3[10] = 2;
            *(undefined4 **)(lVar1 + 0x18) = puVar3;
            pvVar4 = (void *)(*(code *)_xmlMalloc)(0x48);
            if (pvVar4 == (void *)0x0) {
              FUN_100947ea4(0,"could not create an attribute wildcard on anyType");
            }
            else {
              _memset(pvVar4,0,0x48);
              *(undefined4 *)((long)pvVar4 + 0x2c) = 1;
              *(undefined4 *)((long)pvVar4 + 0x28) = 2;
              *(undefined4 *)((long)pvVar4 + 0x20) = 1;
              *(undefined4 *)((long)pvVar4 + 0x24) = 1;
              *(void **)(DAT_102313530 + 0x98) = pvVar4;
              DAT_102313538 = FUN_100947f81("anySimpleType",0x2e,DAT_102313530);
              DAT_102313528 = FUN_100947f81("string",1,DAT_102313538);
              DAT_102313540 = FUN_100947f81("decimal",3,DAT_102313538);
              DAT_102313550 = FUN_100947f81("date",10,DAT_102313538);
              DAT_102313548 = FUN_100947f81("dateTime",0xb,DAT_102313538);
              DAT_102313558 = FUN_100947f81("time",4,DAT_102313538);
              DAT_102313560 = FUN_100947f81("gYear",8,DAT_102313538);
              DAT_102313568 = FUN_100947f81("gYearMonth",9,DAT_102313538);
              DAT_102313580 = FUN_100947f81("gMonth",6,DAT_102313538);
              DAT_102313578 = FUN_100947f81("gMonthDay",7,DAT_102313538);
              DAT_102313570 = FUN_100947f81("gDay",5,DAT_102313538);
              DAT_102313588 = FUN_100947f81("duration",0xc,DAT_102313538);
              DAT_102313590 = FUN_100947f81("float",0xd,DAT_102313538);
              DAT_1023135a0 = FUN_100947f81("double",0xe,DAT_102313538);
              DAT_102313598 = FUN_100947f81("boolean",0xf,DAT_102313538);
              DAT_1023135b8 = FUN_100947f81("anyURI",0x1d,DAT_102313538);
              DAT_1023135a8 = FUN_100947f81("hexBinary",0x2b,DAT_102313538);
              DAT_1023135b0 = FUN_100947f81("base64Binary",0x2c,DAT_102313538);
              DAT_102313680 = FUN_100947f81("NOTATION",0x1c,DAT_102313538);
              DAT_102313648 = FUN_100947f81("QName",0x15,DAT_102313538);
              DAT_1023135e0 = FUN_100947f81("integer",0x1e,DAT_102313540);
              DAT_1023135c8 = FUN_100947f81("nonPositiveInteger",0x1f,DAT_1023135e0);
              DAT_1023135d0 = FUN_100947f81("negativeInteger",0x20,DAT_1023135c8);
              DAT_1023135e8 = FUN_100947f81("long",0x25,DAT_1023135e0);
              DAT_1023135f0 = FUN_100947f81("int",0x23,DAT_1023135e8);
              DAT_1023135f8 = FUN_100947f81("short",0x27,DAT_1023135f0);
              DAT_102313600 = FUN_100947f81("byte",0x29,DAT_1023135f8);
              DAT_1023135d8 = FUN_100947f81("nonNegativeInteger",0x21,DAT_1023135e0);
              DAT_102313608 = FUN_100947f81("unsignedLong",0x26,DAT_1023135d8);
              DAT_102313610 = FUN_100947f81("unsignedInt",0x24,DAT_102313608);
              DAT_102313618 = FUN_100947f81("unsignedShort",0x28,DAT_102313610);
              DAT_102313620 = FUN_100947f81("unsignedByte",0x2a,DAT_102313618);
              DAT_1023135c0 = FUN_100947f81("positiveInteger",0x22,DAT_1023135d8);
              DAT_102313628 = FUN_100947f81("normalizedString",2,DAT_102313528);
              DAT_102313630 = FUN_100947f81("token",0x10,DAT_102313628);
              DAT_102313638 = FUN_100947f81("language",0x11,DAT_102313630);
              DAT_102313640 = FUN_100947f81("Name",0x14,DAT_102313630);
              DAT_102313688 = FUN_100947f81("NMTOKEN",0x12,DAT_102313630);
              DAT_102313650 = FUN_100947f81("NCName",0x16,DAT_102313640);
              DAT_102313658 = FUN_100947f81("ID",0x17,DAT_102313650);
              DAT_102313660 = FUN_100947f81("IDREF",0x18,DAT_102313650);
              DAT_102313670 = FUN_100947f81("ENTITY",0x1a,DAT_102313650);
              DAT_102313678 = FUN_100947f81("ENTITIES",0x1b,DAT_102313538);
              *(undefined8 *)(DAT_102313678 + 0x38) = DAT_102313670;
              DAT_102313668 = FUN_100947f81("IDREFS",0x19,DAT_102313538);
              *(undefined8 *)(DAT_102313668 + 0x38) = DAT_102313660;
              DAT_102313690 = FUN_100947f81("NMTOKENS",0x13,DAT_102313538);
              *(undefined8 *)(DAT_102313690 + 0x38) = DAT_102313688;
              DAT_102313518 = 1;
            }
          }
        }
      }
    }
  }
  return;
}


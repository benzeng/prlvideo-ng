
void _xmlSchemaInitTypes(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  
  if (DAT_1011b8798 == 0) {
    DAT_1011b87a0 = _xmlHashCreate(0x28);
    DAT_1011b87b0 = FUN_100214659("anyType",0x2d,0);
    *(long *)(DAT_1011b87b0 + 0x70) = DAT_1011b87b0;
    *(undefined4 *)(DAT_1011b87b0 + 0x5c) = 3;
    *(undefined4 *)(DAT_1011b87b0 + 0x5c) = 3;
    lVar1 = FUN_100214804();
    if (lVar1 != 0) {
      *(long *)(DAT_1011b87b0 + 0x38) = lVar1;
      puVar2 = (undefined8 *)(*(code *)_xmlMalloc)(0x28);
      if (puVar2 == (undefined8 *)0x0) {
        FUN_10021457c(0,"allocating model group component");
      }
      else {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        *(undefined4 *)puVar2 = 6;
        *(undefined8 **)(lVar1 + 0x18) = puVar2;
        lVar1 = FUN_100214804();
        if (lVar1 != 0) {
          *(undefined4 *)(lVar1 + 0x20) = 0;
          *(undefined4 *)(lVar1 + 0x24) = 0x40000000;
          puVar2[3] = lVar1;
          puVar3 = (undefined4 *)(*(code *)_xmlMalloc)(0x48);
          if (puVar3 == (undefined4 *)0x0) {
            FUN_10021457c(0,"allocating wildcard component");
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
              FUN_10021457c(0,"could not create an attribute wildcard on anyType");
            }
            else {
              _memset(pvVar4,0,0x48);
              *(undefined4 *)((long)pvVar4 + 0x2c) = 1;
              *(undefined4 *)((long)pvVar4 + 0x28) = 2;
              *(undefined4 *)((long)pvVar4 + 0x20) = 1;
              *(undefined4 *)((long)pvVar4 + 0x24) = 1;
              *(void **)(DAT_1011b87b0 + 0x98) = pvVar4;
              DAT_1011b87b8 = FUN_100214659("anySimpleType",0x2e,DAT_1011b87b0);
              DAT_1011b87a8 = FUN_100214659("string",1,DAT_1011b87b8);
              DAT_1011b87c0 = FUN_100214659("decimal",3,DAT_1011b87b8);
              DAT_1011b87d0 = FUN_100214659("date",10,DAT_1011b87b8);
              DAT_1011b87c8 = FUN_100214659("dateTime",0xb,DAT_1011b87b8);
              DAT_1011b87d8 = FUN_100214659("time",4,DAT_1011b87b8);
              DAT_1011b87e0 = FUN_100214659("gYear",8,DAT_1011b87b8);
              DAT_1011b87e8 = FUN_100214659("gYearMonth",9,DAT_1011b87b8);
              DAT_1011b8800 = FUN_100214659("gMonth",6,DAT_1011b87b8);
              DAT_1011b87f8 = FUN_100214659("gMonthDay",7,DAT_1011b87b8);
              DAT_1011b87f0 = FUN_100214659("gDay",5,DAT_1011b87b8);
              DAT_1011b8808 = FUN_100214659("duration",0xc,DAT_1011b87b8);
              DAT_1011b8810 = FUN_100214659("float",0xd,DAT_1011b87b8);
              DAT_1011b8820 = FUN_100214659("double",0xe,DAT_1011b87b8);
              DAT_1011b8818 = FUN_100214659("boolean",0xf,DAT_1011b87b8);
              DAT_1011b8838 = FUN_100214659("anyURI",0x1d,DAT_1011b87b8);
              DAT_1011b8828 = FUN_100214659("hexBinary",0x2b,DAT_1011b87b8);
              DAT_1011b8830 = FUN_100214659("base64Binary",0x2c,DAT_1011b87b8);
              DAT_1011b8900 = FUN_100214659("NOTATION",0x1c,DAT_1011b87b8);
              DAT_1011b88c8 = FUN_100214659("QName",0x15,DAT_1011b87b8);
              DAT_1011b8860 = FUN_100214659("integer",0x1e,DAT_1011b87c0);
              DAT_1011b8848 = FUN_100214659("nonPositiveInteger",0x1f,DAT_1011b8860);
              DAT_1011b8850 = FUN_100214659("negativeInteger",0x20,DAT_1011b8848);
              DAT_1011b8868 = FUN_100214659("long",0x25,DAT_1011b8860);
              DAT_1011b8870 = FUN_100214659("int",0x23,DAT_1011b8868);
              DAT_1011b8878 = FUN_100214659("short",0x27,DAT_1011b8870);
              DAT_1011b8880 = FUN_100214659("byte",0x29,DAT_1011b8878);
              DAT_1011b8858 = FUN_100214659("nonNegativeInteger",0x21,DAT_1011b8860);
              DAT_1011b8888 = FUN_100214659("unsignedLong",0x26,DAT_1011b8858);
              DAT_1011b8890 = FUN_100214659("unsignedInt",0x24,DAT_1011b8888);
              DAT_1011b8898 = FUN_100214659("unsignedShort",0x28,DAT_1011b8890);
              DAT_1011b88a0 = FUN_100214659("unsignedByte",0x2a,DAT_1011b8898);
              DAT_1011b8840 = FUN_100214659("positiveInteger",0x22,DAT_1011b8858);
              DAT_1011b88a8 = FUN_100214659("normalizedString",2,DAT_1011b87a8);
              DAT_1011b88b0 = FUN_100214659("token",0x10,DAT_1011b88a8);
              DAT_1011b88b8 = FUN_100214659("language",0x11,DAT_1011b88b0);
              DAT_1011b88c0 = FUN_100214659("Name",0x14,DAT_1011b88b0);
              DAT_1011b8908 = FUN_100214659("NMTOKEN",0x12,DAT_1011b88b0);
              DAT_1011b88d0 = FUN_100214659("NCName",0x16,DAT_1011b88c0);
              DAT_1011b88d8 = FUN_100214659("ID",0x17,DAT_1011b88d0);
              DAT_1011b88e0 = FUN_100214659("IDREF",0x18,DAT_1011b88d0);
              DAT_1011b88f0 = FUN_100214659("ENTITY",0x1a,DAT_1011b88d0);
              DAT_1011b88f8 = FUN_100214659("ENTITIES",0x1b,DAT_1011b87b8);
              *(undefined8 *)(DAT_1011b88f8 + 0x38) = DAT_1011b88f0;
              DAT_1011b88e8 = FUN_100214659("IDREFS",0x19,DAT_1011b87b8);
              *(undefined8 *)(DAT_1011b88e8 + 0x38) = DAT_1011b88e0;
              DAT_1011b8910 = FUN_100214659("NMTOKENS",0x13,DAT_1011b87b8);
              *(undefined8 *)(DAT_1011b8910 + 0x38) = DAT_1011b8908;
              DAT_1011b8798 = 1;
            }
          }
        }
      }
    }
  }
  return;
}


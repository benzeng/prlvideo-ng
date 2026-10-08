
/* Function Stack Size: 0x18 bytes */

void CMacCocoaApplicationDelegate::applicationWillTerminate_(ID param_1,SEL param_2,ID param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  FUN_100df99c0("","prl_client_app",0,"Application will terminate...");
  uVar20 = 0;
  uVar19 = 0;
  uVar18 = 0;
  uVar17 = 0;
  uVar16 = 0;
  uVar15 = 0;
  uVar14 = 0;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0;
  cVar1 = QMetaObject::invokeMethod(DAT_102310918,"deinit",0,0,0);
  if (cVar1 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","invoked",
                  "Application/CApplication_mac.mm",CONCAT44(uVar2,0x183),
                  "-[CMacCocoaApplicationDelegate applicationWillTerminate:]",uVar3,uVar4,uVar5,
                  uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,
                  uVar18,uVar19,uVar20);
  }
  uVar20 = 0;
  uVar19 = 0;
  uVar18 = 0;
  uVar17 = 0;
  uVar16 = 0;
  uVar15 = 0;
  uVar14 = 0;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0;
  cVar1 = QMetaObject::invokeMethod(DAT_102310918,"finalize",0,0,0);
  if (cVar1 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","invoked",
                  "Application/CApplication_mac.mm",CONCAT44(uVar2,0x186),
                  "-[CMacCocoaApplicationDelegate applicationWillTerminate:]",uVar3,uVar4,uVar5,
                  uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,
                  uVar18,uVar19,uVar20);
  }
  return;
}


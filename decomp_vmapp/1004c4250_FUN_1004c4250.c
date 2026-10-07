
undefined1 FUN_1004c4250(undefined8 *param_1)

{
  long lVar1;
  QArrayData *pQVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 uVar7;
  QArrayData *local_448;
  undefined1 local_43a;
  undefined1 local_439;
  char local_438 [1032];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_100bedb20,PTR_s_alloc_100bed228);
  uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar4,PTR_s_init_100bed248);
  uVar5 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSFileManager_100bedc68,PTR_s_defaultManager_100bedaa0);
  lVar6 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (uVar5,PTR_s_URLForDirectory_inDomain_appropr_100bed828,5,1,0,0,0);
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    uVar5 = (*(code *)PTR__objc_msgSend_100ba25e8)
                      (PTR__OBJC_CLASS___NSString_100bedb00,PTR_s_stringWithFormat__100bed9f0,
                       &cf_Containers____Data_Library_Preferences____plist,&cf_com_apple_Photos,
                       &cf_com_apple_Photos);
    lVar6 = (*(code *)PTR__objc_msgSend_100ba25e8)
                      (PTR__OBJC_CLASS___NSURL_100bedbf0,
                       PTR_s_URLWithString_relativeToURL__100bed830,uVar5,lVar6);
    if (lVar6 == 0) {
      uVar7 = 0;
    }
    else {
      lVar6 = (*(code *)PTR__objc_msgSend_100ba25e8)
                        (PTR__OBJC_CLASS___NSDictionary_100bedb98,
                         PTR_s_dictionaryWithContentsOfURL__100bed838,lVar6);
      if (lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        lVar6 = (*(code *)PTR__objc_msgSend_100ba25e8)
                          (lVar6,PTR_s_objectForKey__100bed900,&cf_IPXDefaultLibraryURLBookmark);
        if (lVar6 == 0) {
          uVar7 = 0;
        }
        else {
          lVar6 = (*(code *)PTR__objc_msgSend_100ba25e8)
                            (PTR__OBJC_CLASS___NSURL_100bedbf0,
                             PTR_s_URLByResolvingBookmarkData_optio_100bed7e0,lVar6,0,0,&local_43a,0
                            );
          if (lVar6 == 0) {
            uVar7 = 0;
          }
          else {
            cVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)
                              (lVar6,PTR_s_getFileSystemRepresentation_maxL_100bed7e8,local_438,
                               0x400);
            if (cVar3 == '\0') {
              uVar7 = 0;
            }
            else {
              _strlen(local_438);
              QString::fromUtf8_helper((char *)&local_448,(int)local_438);
              pQVar2 = (QArrayData *)*param_1;
              *param_1 = local_448;
              uVar7 = 1;
              local_448 = pQVar2;
              if (*(int *)pQVar2 != -1) {
                if (*(int *)pQVar2 != 0) {
                  LOCK();
                  *(int *)pQVar2 = *(int *)pQVar2 + -1;
                  local_439 = *(int *)pQVar2 != 0;
                  UNLOCK();
                  if ((bool)local_439) goto LAB_1004c4448;
                }
                QArrayData::deallocate(pQVar2,2,8);
              }
            }
          }
        }
      }
    }
  }
LAB_1004c4448:
  (*(code *)PTR__objc_msgSend_100ba25e8)(uVar4,PTR_s_drain_100bed2a8);
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}


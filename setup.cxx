// generated by Fast Light User Interface Designer (fluid) version 1.0108

#include "setup.h"

Fl_Double_Window *SetupWindow=(Fl_Double_Window *)0;

static void cb_SetupWindow(Fl_Double_Window*, void*) {
  if (CancelButton->active())
  exit(0);
}

Fl_Box *Title[6]={(Fl_Box *)0};

Fl_Wizard *Wizard=(Fl_Wizard *)0;

Fl_Help_View *ReadmeFile=(Fl_Help_View *)0;

Fl_Round_Button *TypeButton[8]={(Fl_Round_Button *)0};

Fl_Check_Browser *SoftwareList=(Fl_Check_Browser *)0;

Fl_Box *SoftwareSize=(Fl_Box *)0;

Fl_Button *InstallAllButton=(Fl_Button *)0;

static void cb_InstallAllButton(Fl_Button*, void*) {
  SoftwareList->check_all();
list_cb(0,0);
}

Fl_Button *InstallNoneButton=(Fl_Button *)0;

static void cb_InstallNoneButton(Fl_Button*, void*) {
  SoftwareList->check_none();
list_cb(0,0);
}

Fl_Browser *ConfirmList=(Fl_Browser *)0;

Fl_Browser *LicenseBrowser=(Fl_Browser *)0;

Fl_Round_Button *LicenseAccept=(Fl_Round_Button *)0;

static void cb_LicenseAccept(Fl_Round_Button*, void*) {
  NextButton->activate();
}

Fl_Round_Button *LicenseDecline=(Fl_Round_Button *)0;

static void cb_LicenseDecline(Fl_Round_Button*, void*) {
  NextButton->activate();
}

Fl_Group *Pane[6]={(Fl_Group *)0};

Fl_Progress *InstallPercent=(Fl_Progress *)0;

Fl_Browser *InstallLog=(Fl_Browser *)0;

Fl_Box *WelcomeImage=(Fl_Box *)0;

#include <FL/Fl_Pixmap.H>
static const char *idata_default[] = {
"96 96 64 1",
" \tc None",
".\tc #000100",
"+\tc #0C0E0A",
"@\tc #1C1C19",
"#\tc #231C0C",
"$\tc #312714",
"%\tc #2C2B27",
"&\tc #3B2D0F",
"*\tc #403728",
"=\tc #393A38",
"-\tc #534117",
";\tc #504430",
">\tc #474946",
",\tc #5B482B",
"\'\tc #634D1C",
")\tc #704B0B",
"!\tc #5F523D",
"~\tc #555754",
"{\tc #7B562C",
"]\tc #6F5F40",
"^\tc #815E18",
"/\tc #616260",
"(\tc #7B6421",
"_\tc #816435",
":\tc #8A6620",
"<\tc #8E6A1C",
"[\tc #8A6B23",
"}\tc #856E4F",
"|\tc #727371",
"1\tc #946F2F",
"2\tc #9C7B29",
"3\tc #7F817E",
"4\tc #9C824C",
"5\tc #A18240",
"6\tc #98835F",
"7\tc #A9862F",
"8\tc #AA8B3C",
"9\tc #8E908D",
"0\tc #B09241",
"a\tc #B29451",
"b\tc #B6994D",
"c\tc #BB9D52",
"d\tc #9FA09D",
"e\tc #B8A173",
"f\tc #C0A35E",
"g\tc #BFA56D",
"h\tc #ABADAA",
"i\tc #CEB069",
"j\tc #B8B29F",
"k\tc #C3B28A",
"l\tc #B2B4B1",
"m\tc #CFB681",
"n\tc #BCBEBB",
"o\tc #DCBC7C",
"p\tc #CCBFA3",
"q\tc #C8CAC6",
"r\tc #ECCE8C",
"s\tc #CFD2CE",
"t\tc #D7D9D6",
"u\tc #FDDE9B",
"v\tc #DFE1DE",
"w\tc #E9EBE7",
"x\tc #F1F3F0",
"y\tc #FDFFFC",
"                                                                             \
                   ",
"                                                                             \
                   ",
"                                                                             \
                   ",
"                                                                             \
                   ",
"                                                                             \
                   ",
"                                                                             \
                   ",
"                                                                             \
                   ",
"                                                                             \
                   ",
"                                                                             \
                   ",
"                                                                             \
                   ",
"                                                                             \
                   ",
"                                                                             \
                   ",
"                                                                             \
                   ",
"                                                q9~==n                       \
                   ",
"                                            q9~@.....%                       \
                   ",
"                                        q9~@....*}eu#.q                      \
                   ",
"                                    q9~@....*}eurroi].3          t>+/        \
                   ",
"                                q9~@...+;}euuoofffffa.%         t%...~       \
                   ",
"                            q9~@...+;6murroffffffffff#.q       t%.!m+.~      \
                   ",
"                        q9~@...+;6muromfffffffgfgffff].3      t%.!uum+.~     \
                   ",
"                    q9~@...@;6muroiffff]@#;}afffffgffa.%     t%.!uuuum..~    \
                   ",
"                 9~@...@!6muroifgfffffa......#;_gfffff#.q   t%.!uuuuuum+.~   \
                   ",
"                3..@!6rurrofffffffgfff}./vd/@+...#;_gf].|  t%.!uuuuuuuum..~  \
                   ",
"                =.euroffffff4;$#$$$%$$#.dyyyyvd/@....#$.@ t%.!uuuuuuuuuum+.~ \
                   ",
"                |.}offffffff+...........vyyyyyyyyvd/@....%@.!uuuuuuuuuuuum..~\
                   ",
"                h.;rffffffff..hhhhhhhd.@yyyyyyyyyyyyyvd/@....%}6upuuuuuuuum+.\
~                  ",
"                 +.uigfgffgf..wxvxvxvd./yyyyyyyyyyyyyyyyyvd/@....*!epuuuuuum.\
.~                 ",
"                 >.eofffffff..vvxvxvx/.dyyyyyyyyyyyyyyyyyyyyyvd/%....%}kuuuum\
+.~                ",
"                 3.]rfffffff..xvxvxvx%.vyyyyyyyyyyyyyyyyyyyyyyyyyvd|%...uuuuu\
m..~               ",
"                 q.%rfgfffff..vxvxxxv.@yyxqswyyyyyyyyyyyyyyyyyyyyyyyyx%.euuuu\
um+.~              ",
"                  @.riffffff..xxqnnn9./yyxllhlntwyyyyyyyyyyyyyyyyyyyyy+.uuuuu\
uum..~             ",
"                  ~.eogfgfff..vxllhl>.dyyyvtnlllhlnswyyyyyyyyyyyyyyyys.=uuuuu\
uuum+.~            ",
"                  d.!rffffff..xvvvvv%.vyyyyyyyvtnlllhlntwyyyyyyyyyyyy9.}uuuuu\
uuuum..~           ",
"                  t.@uffgfff..xxtssq.@yyxqqtwyyyyyxtnlllhlnswyyyyyyyy~.kuuuuu\
uuuuum+.~          ",
"                   %.mifffff..xxhll|./yyxhllllqtwyyyyyvtnlllhlntwyyyy+.uupuuu\
uuuuuum..9         ",
"         thhhhhhhhh~.6offfb0..xxvts/.dyyyxvsnllllhqtwyyyyyxtnlllhnyys.*uuupuu\
uuuuuuum+.9        ",
"         %...........!r88287..xxtss%.tyyyyyyyxvsnlllllqtwyyyyyvtqsyy9.}uuuuuu\
upuuuuuum..n       ",
"        h.#,---------{4877<:..xxlld.@yxwlnsvxyyyyxvsnllllhqtwyyyyyyy>.kuuuuuu\
uuuuuuuuu;.h       ",
"        q..go077778882{{^)))..xxtt9.~xxxllllllqtxyyyyxvsnlllllqtxyyy+.uuuuuuu\
uuuuuuuu!..t       ",
"         9.+mr788877788_{)))..xxxv/.9xxxxvtqllllllqtxyyyyxvsnlllnyys.*uuuuuuu\
uupuuuu!.+n        ",
"          9.+mr777777782_{\')..xxll%.qvxvxxxxxxtqnlllllqtxyyyyxvqvyy9.}uuuuuu\
uuuuuuu~..n         ",
"           9.+mr728872782{{)..xxsl.@vxthhnqtxxxxxxtqllllllqtxyyyyyy~.epuuuxuu\
uuuuu!..n          ",
"            9.+er778787882_{..xxxd.~vvvnlllhhlqtvxxxxxtqnlllllqvyyy+.fouuuuuu\
uuuu/..q           ",
"             9..6r778787778{,.xyl>.9ttvvttqnlllllnqtxxxxxxtqllllyyq.#afguuuuu\
uuu!.+n            ",
"              9..6r777788787{{xxq%.nttttttvvvtqnllllhlqtxxxxxxttxx9.&)afguuuu\
xu!..n             ",
"               9+.6r828777788{}xv.@stshllnqtvvtvvtqnllhhhlqtxxxxxx>.-^)afeuuu\
u!..n              ",
"                9..6r778277888{63.>sstnllllhlnqsttvvvtqnlllhhlsxxx+.)))^afguu\
!.........+/       ",
"                 9.+6r877887778{,.3qqqqssnnllllllnqtvvvvvtqnllhxvn.#)))))afo!\
............n      ",
"                  9..6r077778788{{dqqnnqsqssqqnlllhllnqttvvvvttvv3.&))))^5fff\
ffffioru4;@.h      ",
"                   9..ir772878778{}nnllllnnqqqqssnnllllllnqtvtvvv>.-^1affffff\
foour6!@...=       ",
"                    =.)ir877778888{}nnlllllllnnqqssqqqnllllllnvvt$,affffffgou\
ue}%...+>9q        ",
"                    =.^)fu087877778{}lnnnnlllllllnnqqqqsqqnlllpkgfffffioourg;\
....=|n            ",
"                    =.:^)fu077778788{}llnnnnnnlllllllnnqqqpmgffffffoorumf11{.\
@/dt               ",
"                    =.<:))fu028778787{}lllnnlnnnnnlllljegfgffffioruoga^1^:^\'\
.|                  ",
"                    =.8<1^)fu072777788{}lllnlnnlnnjkgfffffffoouuoa1:::::_::\'\
.|                  ",
"                    =.782:^)au087878778{}dlhlhjpefffffffioruog1^^1:1^1:::11^.\
|                  ",
"                    =.088<1^)ai878788788{}npmofooooiooouroa1:1:1_^::1_:2278(.\
|                  ",
"                    =.70802<^)^)))))))))){aooooooomooog1{1:::::[:1[[2772787(.\
|                  ",
"                    =.008082<<<<<<<<1<<1i1<1^^^^1^11^11::::1_[1[25787888782(.\
|                  ",
"                    =.800008222222222222r1:7211::::::::11[[[222877772777777(.\
|                  ",
"                    =.8080b0022222222280r1:8821:1_1:1[[[1182887878777778788(.\
|                  ",
"                    =.08b08b888227277b0cr1<77772[:[[1[587777772787888827877(.\
|                  ",
"                    =.b8b08cb0882728bba0r1<788878[5777787887787777777787728(.\
|                  ",
"                    =.800808b8c888bc8c0cr1<87778777887778772878727777877877(.\
|                  ",
"                    =.5c8cc8c00008bbacaco1<77777877728777787772888287727872(.\
|                  ",
"                    /.#8a08c8bcbcc8c000cr1<82878727877872877877777777887778(.\
|                  ",
"                     ~.#500c8c8abaccccccr1<77827787877877787887778787787878^.\
|                  ",
"                      ~.#5c8cac0c08ca8car1<28777877287787872778287277772787(.\
|                  ",
"                       ~.#5c00cacccccc0ar1<77787787782782777777778788778728(.\
|                  ",
"                        /.#5ccc00aaacaccr1[78872877777777788878787277887877(.\
|                  ",
"                         ~.#5ccc0ccc0ccar1[77777788788778772778727777277878(.\
|                  ",
"                          ~.#5acc0ccfaccr[[77887272872887777287778887777727(.\
|                  ",
"                           ~.#accca0cccar1<27788787787728870728777787827787(.\
|                  ",
"                            ~.#5cccacaccr1[77277777777787787787877728778827(.\
|                  ",
"                             ~.#5ccccffar1[87778788287777728777828778877788^.\
|                  ",
"                              /.#accfcccr[[77887727878728787287777777777[-#..\
3                  ",
"                               ~.#acaffar1<8727877777887777078288787(\'$+....\
/t                  ",
"                                ~.#accccr([7778778772772877727022\'&+....>3n \
                    ",
"                                 ~.#afffr1<877287887770788272(&+....=|h      \
                   ",
"                                  ~.#aafr[[78787727887722(-#....%/dt         \
                   ",
"                                   ~.#afr1<2777877728(-#....@~dt             \
                   ",
"                                    ~.#ar[[787777(-&....+~9q                 \
                   ",
"                                     ~.#m:<78(\'$+...+>3n                    \
                    ",
"                                      ~.#(\'&++...=|n                        \
                    ",
"                                       ~.....%/h                             \
                   ",
"                                        |=/dt                                \
                   ",
"                                                                             \
                   ",
"                                                                             \
                   ",
"                                                                             \
                   ",
"                                                                             \
                   ",
"                                                                             \
                   ",
"                                                                             \
                   ",
"                                                                             \
                   ",
"                                                                             \
                   ",
"                                                                             \
                   ",
"                                                                             \
                   "
};
static Fl_Pixmap image_default(idata_default);

Fl_Button *PrevButton=(Fl_Button *)0;

static void cb_PrevButton(Fl_Button*, void*) {
  Wizard->prev();

int i;

for (i = 0; i < 6; i ++)
{
  Title[i]->activate();

  if (Pane[i]->visible())
    break;
}

for (i ++; i < 6; i ++)
  Title[i]->deactivate();
}

Fl_Button *NextButton=(Fl_Button *)0;

Fl_Button *CancelButton=(Fl_Button *)0;

static void cb_CancelButton(Fl_Button*, void*) {
  exit(0);
}

Fl_Double_Window* make_window() {
  { SetupWindow = new Fl_Double_Window(600, 330, "Install");
    SetupWindow->callback((Fl_Callback*)cb_SetupWindow);
    { Title[0] = new Fl_Box(10, 10, 130, 25, "Welcome");
      Title[0]->labelfont(1);
      Title[0]->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
    } // Fl_Box* Title[0]
    { Title[1] = new Fl_Box(10, 35, 130, 25, "Install Type");
      Title[1]->labelfont(1);
      Title[1]->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      Title[1]->deactivate();
    } // Fl_Box* Title[1]
    { Title[2] = new Fl_Box(10, 60, 130, 25, "Select Software");
      Title[2]->labelfont(1);
      Title[2]->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      Title[2]->deactivate();
    } // Fl_Box* Title[2]
    { Title[3] = new Fl_Box(10, 85, 130, 25, "Confirm");
      Title[3]->labelfont(1);
      Title[3]->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      Title[3]->deactivate();
    } // Fl_Box* Title[3]
    { Title[4] = new Fl_Box(10, 110, 130, 25, "License");
      Title[4]->labelfont(1);
      Title[4]->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      Title[4]->deactivate();
    } // Fl_Box* Title[4]
    { Title[5] = new Fl_Box(10, 135, 130, 25, "Installing");
      Title[5]->labelfont(1);
      Title[5]->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      Title[5]->deactivate();
    } // Fl_Box* Title[5]
    { Wizard = new Fl_Wizard(150, 10, 440, 275);
      Wizard->box(FL_THIN_DOWN_BOX);
      Wizard->color((Fl_Color)48);
      { Pane[0] = new Fl_Group(150, 10, 440, 275);
        Pane[0]->labelfont(1);
        Pane[0]->labelsize(18);
        Pane[0]->labelcolor((Fl_Color)4);
        Pane[0]->align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE);
        Pane[0]->hide();
        { ReadmeFile = new Fl_Help_View(170, 30, 400, 235);
        } // Fl_Help_View* ReadmeFile
        Pane[0]->end();
      } // Fl_Group* Pane[0]
      { Pane[1] = new Fl_Group(150, 10, 440, 275);
        Pane[1]->labelfont(1);
        Pane[1]->labelsize(18);
        Pane[1]->labelcolor((Fl_Color)4);
        Pane[1]->align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE);
        Pane[1]->hide();
        { Fl_Box* o = new Fl_Box(170, 30, 400, 25, "Select the installation type:");
          o->align(132|FL_ALIGN_INSIDE);
        } // Fl_Box* o
        { Fl_Group* o = new Fl_Group(170, 65, 400, 200);
          { TypeButton[0] = new Fl_Round_Button(170, 65, 400, 25);
            TypeButton[0]->type(102);
            TypeButton[0]->down_box(FL_ROUND_DOWN_BOX);
            TypeButton[0]->callback((Fl_Callback*)type_cb);
          } // Fl_Round_Button* TypeButton[0]
          { TypeButton[1] = new Fl_Round_Button(170, 90, 400, 25);
            TypeButton[1]->type(102);
            TypeButton[1]->down_box(FL_ROUND_DOWN_BOX);
            TypeButton[1]->callback((Fl_Callback*)type_cb);
          } // Fl_Round_Button* TypeButton[1]
          { TypeButton[2] = new Fl_Round_Button(170, 115, 400, 25);
            TypeButton[2]->type(102);
            TypeButton[2]->down_box(FL_ROUND_DOWN_BOX);
            TypeButton[2]->callback((Fl_Callback*)type_cb);
          } // Fl_Round_Button* TypeButton[2]
          { TypeButton[3] = new Fl_Round_Button(170, 140, 400, 25);
            TypeButton[3]->type(102);
            TypeButton[3]->down_box(FL_ROUND_DOWN_BOX);
            TypeButton[3]->callback((Fl_Callback*)type_cb);
          } // Fl_Round_Button* TypeButton[3]
          { TypeButton[4] = new Fl_Round_Button(170, 165, 400, 25);
            TypeButton[4]->type(102);
            TypeButton[4]->down_box(FL_ROUND_DOWN_BOX);
            TypeButton[4]->callback((Fl_Callback*)type_cb);
          } // Fl_Round_Button* TypeButton[4]
          { TypeButton[5] = new Fl_Round_Button(170, 190, 400, 25);
            TypeButton[5]->type(102);
            TypeButton[5]->down_box(FL_ROUND_DOWN_BOX);
            TypeButton[5]->callback((Fl_Callback*)type_cb);
          } // Fl_Round_Button* TypeButton[5]
          { TypeButton[6] = new Fl_Round_Button(170, 215, 400, 25);
            TypeButton[6]->type(102);
            TypeButton[6]->down_box(FL_ROUND_DOWN_BOX);
            TypeButton[6]->callback((Fl_Callback*)type_cb);
          } // Fl_Round_Button* TypeButton[6]
          { TypeButton[7] = new Fl_Round_Button(170, 240, 400, 25);
            TypeButton[7]->type(102);
            TypeButton[7]->down_box(FL_ROUND_DOWN_BOX);
            TypeButton[7]->callback((Fl_Callback*)type_cb);
          } // Fl_Round_Button* TypeButton[7]
          o->end();
        } // Fl_Group* o
        Pane[1]->end();
      } // Fl_Group* Pane[1]
      { Pane[2] = new Fl_Group(150, 10, 440, 275);
        Pane[2]->labelfont(1);
        Pane[2]->labelsize(18);
        Pane[2]->labelcolor((Fl_Color)4);
        Pane[2]->align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE);
        { Fl_Box* o = new Fl_Box(170, 30, 400, 25, "Select the software you want to install:");
          o->align(132|FL_ALIGN_INSIDE);
        } // Fl_Box* o
        { SoftwareList = new Fl_Check_Browser(170, 85, 400, 145, " Available Software:");
          SoftwareList->type(3);
          SoftwareList->box(FL_DOWN_BOX);
          SoftwareList->selection_color(FL_BACKGROUND2_COLOR);
          SoftwareList->labelfont(1);
          SoftwareList->callback((Fl_Callback*)list_cb);
          SoftwareList->align(FL_ALIGN_TOP_LEFT);
          SoftwareList->when(3);
        } // Fl_Check_Browser* SoftwareList
        { SoftwareSize = new Fl_Box(170, 235, 201, 35, "0k marked for installation.");
          SoftwareSize->align(196|FL_ALIGN_INSIDE);
        } // Fl_Box* SoftwareSize
        { InstallAllButton = new Fl_Button(381, 240, 80, 25, "Install All");
          InstallAllButton->callback((Fl_Callback*)cb_InstallAllButton);
        } // Fl_Button* InstallAllButton
        { InstallNoneButton = new Fl_Button(471, 240, 99, 25, "Install None");
          InstallNoneButton->callback((Fl_Callback*)cb_InstallNoneButton);
        } // Fl_Button* InstallNoneButton
        Pane[2]->end();
      } // Fl_Group* Pane[2]
      { Pane[3] = new Fl_Group(150, 10, 440, 275);
        Pane[3]->labelfont(1);
        Pane[3]->labelsize(18);
        Pane[3]->labelcolor((Fl_Color)4);
        Pane[3]->align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE);
        Pane[3]->hide();
        { Fl_Box* o = new Fl_Box(170, 30, 400, 25, "Confirm your software selections below:");
          o->align(132|FL_ALIGN_INSIDE);
        } // Fl_Box* o
        { ConfirmList = new Fl_Browser(170, 85, 400, 180, "Selected Software:");
          ConfirmList->labelfont(1);
          ConfirmList->align(FL_ALIGN_TOP_LEFT);
        } // Fl_Browser* ConfirmList
        Pane[3]->end();
      } // Fl_Group* Pane[3]
      { Pane[4] = new Fl_Group(150, 10, 440, 275);
        Pane[4]->labelfont(1);
        Pane[4]->labelsize(18);
        Pane[4]->labelcolor((Fl_Color)4);
        Pane[4]->align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE);
        Pane[4]->hide();
        { LicenseBrowser = new Fl_Browser(170, 48, 400, 182, "License Agreement:");
          LicenseBrowser->labelfont(1);
          LicenseBrowser->textfont(4);
          LicenseBrowser->textsize(12);
          LicenseBrowser->align(FL_ALIGN_TOP_LEFT);
          Fl_Group::current()->resizable(LicenseBrowser);
        } // Fl_Browser* LicenseBrowser
        { Fl_Group* o = new Fl_Group(170, 240, 400, 25);
          { LicenseAccept = new Fl_Round_Button(190, 240, 210, 25, "Accept agreement and install");
            LicenseAccept->type(102);
            LicenseAccept->down_box(FL_ROUND_DOWN_BOX);
            LicenseAccept->callback((Fl_Callback*)cb_LicenseAccept);
            LicenseAccept->align(132|FL_ALIGN_INSIDE);
          } // Fl_Round_Button* LicenseAccept
          { LicenseDecline = new Fl_Round_Button(410, 240, 140, 25, "Cancel installation");
            LicenseDecline->type(102);
            LicenseDecline->down_box(FL_ROUND_DOWN_BOX);
            LicenseDecline->callback((Fl_Callback*)cb_LicenseDecline);
          } // Fl_Round_Button* LicenseDecline
          o->end();
        } // Fl_Group* o
        Pane[4]->end();
      } // Fl_Group* Pane[4]
      { Pane[5] = new Fl_Group(150, 10, 440, 275);
        Pane[5]->labelfont(1);
        Pane[5]->labelsize(18);
        Pane[5]->labelcolor((Fl_Color)4);
        Pane[5]->align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE);
        Pane[5]->hide();
        { InstallPercent = new Fl_Progress(170, 47, 400, 15, "Progress Label...");
          InstallPercent->color((Fl_Color)48);
          InstallPercent->selection_color((Fl_Color)221);
          InstallPercent->align(FL_ALIGN_TOP_LEFT);
        } // Fl_Progress* InstallPercent
        { InstallLog = new Fl_Browser(170, 74, 400, 191);
        } // Fl_Browser* InstallLog
        Pane[5]->end();
      } // Fl_Group* Pane[5]
      Wizard->end();
    } // Fl_Wizard* Wizard
    { WelcomeImage = new Fl_Box(10, 190, 130, 130);
      WelcomeImage->image(image_default);
      WelcomeImage->align(FL_ALIGN_BOTTOM_LEFT|FL_ALIGN_INSIDE);
    } // Fl_Box* WelcomeImage
    { PrevButton = new Fl_Button(356, 295, 72, 25, "@-2< Back");
      PrevButton->callback((Fl_Callback*)cb_PrevButton);
    } // Fl_Button* PrevButton
    { NextButton = new Fl_Button(438, 295, 74, 25, "Next @-2>");
      NextButton->callback((Fl_Callback*)next_cb);
    } // Fl_Button* NextButton
    { CancelButton = new Fl_Button(522, 295, 68, 25, "Cancel");
      CancelButton->callback((Fl_Callback*)cb_CancelButton);
    } // Fl_Button* CancelButton
    SetupWindow->end();
  } // Fl_Double_Window* SetupWindow
  return SetupWindow;
}

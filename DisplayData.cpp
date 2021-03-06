#include "DisplayData.h"

static const bool DisplayData::characters[59][5][5] = {
  /*
    Sample for copy and paste:
    {
      {0, 0, 0, 0, 0},  //
      {0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0}
    },

  */
  {
    {0, 0, 0, 0, 0},  // <space>
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0}
  },
  {
    {0, 0, 1, 0, 0},  // !
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0}
  },
  {
    {0, 1, 0, 1, 0},  // "
    {0, 1, 0, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0}
  },
  {
    {0, 1, 0, 1, 0},  // #
    {1, 1, 1, 1, 1},
    {0, 1, 0, 1, 0},
    {1, 1, 1, 1, 1},
    {0, 1, 0, 1, 0}
  },
  {
    {0, 1, 1, 1, 1},  // $
    {1, 0, 1, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 1, 0, 1},
    {1, 1, 1, 1, 0}
  },
  {
    {1, 1, 0, 0, 1},  // %
    {1, 1, 0, 1, 0},
    {0, 0, 1, 0, 0},
    {0, 1, 0, 1, 1},
    {1, 0, 0, 1, 1}
  },
  {
    {0, 1, 1, 1, 0},  // &
    {0, 1, 0, 1, 0},
    {1, 1, 1, 0, 1},
    {1, 0, 0, 1, 0},
    {1, 1, 1, 0, 1}
  },
  {
    {0, 0, 1, 0, 0},  // '
    {0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0}
  },
  {
    {0, 0, 0, 1, 0},  // (
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 0, 1, 0}
  },
  {
    {0, 1, 0, 0, 0},  // )
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 1, 0, 0, 0}
  },
  {
    {1, 0, 1, 0, 1},  // *
    {0, 1, 1, 1, 0},
    {1, 1, 1, 1, 1},
    {0, 1, 1, 1, 0},
    {1, 0, 1, 0, 1}
  },
  {
    {0, 0, 0, 0, 0},  // +
    {0, 0, 1, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0}
  },
  {
    {0, 0, 0, 0, 0},  // ,
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0}
  },
  {
    {0, 0, 0, 0, 0},  // -
    {0, 0, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0}
  },
  {
    {0, 0, 0, 0, 0},  // .
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0}
  },
  {
    {0, 0, 0, 0, 1},  // /
    {0, 0, 0, 1, 0},
    {0, 0, 1, 0, 0},
    {0, 1, 0, 0, 0},
    {1, 0, 0, 0, 0}
  },
  {
    {0, 1, 1, 1, 0},  // 0
    {1, 0, 0, 0, 1},
    {1, 0, 0, 0, 1},
    {1, 0, 0, 0, 1},
    {0, 1, 1, 1, 0}
  },
  {
    {0, 0, 1, 0, 0},  // 1
    {0, 1, 1, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0},
    {1, 1, 1, 1, 1}
  },
  {
    {0, 1, 1, 1, 0},  // 2
    {1, 0, 0, 0, 1},
    {0, 0, 1, 1, 0},
    {0, 1, 0, 0, 0},
    {1, 1, 1, 1, 1}
  },
  {
    {0, 1, 1, 1, 0},  // 3
    {1, 0, 0, 0, 1},
    {0, 0, 1, 1, 0},
    {1, 0, 0, 0, 1},
    {0, 1, 1, 1, 0}
  },
  {
    {1, 0, 0, 1, 0},  // 4
    {1, 0, 0, 1, 0},
    {1, 1, 1, 1, 1},
    {0, 0, 0, 1, 0},
    {0, 0, 0, 1, 0}
  },
  {
    {1, 1, 1, 1, 1},  // 5
    {1, 0, 0, 0, 0},
    {1, 1, 1, 1, 0},
    {0, 0, 0, 0, 1},
    {1, 1, 1, 1, 0}
  },
  {
    {0, 1, 1, 1, 0},  // 6
    {1, 0, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {1, 0, 0, 0, 1},
    {0, 1, 1, 1, 0}
  },
  {
    {1, 1, 1, 1, 1},  // 7
    {0, 0, 0, 0, 1},
    {0, 0, 0, 1, 0},
    {0, 0, 1, 0, 0},
    {0, 1, 0, 0, 0}
  },
  {
    {0, 1, 1, 1, 0},  // 8
    {1, 0, 0, 0, 1},
    {0, 1, 1, 1, 0},
    {1, 0, 0, 0, 1},
    {0, 1, 1, 1, 0}
  },
  {
    {0, 1, 1, 1, 0},  // 9
    {1, 0, 0, 0, 1},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 1},
    {0, 1, 1, 1, 0}
  },
  {
    {0, 0, 0, 0, 0},  // :
    {0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0}
  },
  {
    {0, 0, 0, 0, 0},  // ;
    {0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0}
  },
  {
    {0, 0, 0, 0, 0},  // <
    {0, 0, 1, 1, 0},
    {0, 1, 0, 0, 0},
    {0, 0, 1, 1, 0},
    {0, 0, 0, 0, 0}
  },
  {
    {0, 0, 0, 0, 0},  // =
    {1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0}
  },
  {
    {0, 0, 0, 0, 0},  // >
    {0, 1, 1, 0, 0},
    {0, 0, 0, 1, 0},
    {0, 1, 1, 0, 0},
    {0, 0, 0, 0, 0}
  },
  {
    {0, 1, 1, 1, 0},  // ?
    {1, 0, 0, 0, 1},
    {0, 0, 1, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0}
  },
  {
    {0, 1, 1, 1, 0},  // @
    {1, 0, 0, 0, 1},
    {1, 0, 1, 1, 1},
    {1, 0, 1, 1, 1},
    {0, 1, 1, 1, 0}
  },
  {
    {0, 1, 1, 1, 0},  // A
    {1, 0, 0, 0, 1},
    {1, 1, 1, 1, 1},
    {1, 0, 0, 0, 1},
    {1, 0, 0, 0, 1}
  },
  {
    {1, 1, 1, 1, 0},  // B
    {1, 0, 0, 0, 1},
    {1, 1, 1, 1, 0},
    {1, 0, 0, 0, 1},
    {1, 1, 1, 1, 0}
  },
  {
    {0, 1, 1, 1, 0},  // C
    {1, 0, 0, 0, 1},
    {1, 0, 0, 0, 0},
    {1, 0, 0, 0, 1},
    {0, 1, 1, 1, 0}
  },
  {
    {1, 1, 1, 1, 0},  // D
    {1, 0, 0, 0, 1},
    {1, 0, 0, 0, 1},
    {1, 0, 0, 0, 1},
    {1, 1, 1, 1, 0}
  },
  {
    {1, 1, 1, 1, 1},  // E
    {1, 0, 0, 0, 0},
    {1, 1, 1, 1, 0},
    {1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1}
  },
  {
    {1, 1, 1, 1, 1},  // F
    {1, 0, 0, 0, 0},
    {1, 1, 1, 1, 0},
    {1, 0, 0, 0, 0},
    {1, 0, 0, 0, 0}
  },
  {
    {0, 1, 1, 1, 0},  // G
    {1, 0, 0, 0, 1},
    {1, 0, 0, 0, 0},
    {1, 0, 0, 1, 1},
    {0, 1, 1, 1, 0}
  },
  {
    {1, 0, 0, 0, 1},  // H
    {1, 0, 0, 0, 1},
    {1, 1, 1, 1, 1},
    {1, 0, 0, 0, 1},
    {1, 0, 0, 0, 1}
  },
  {
    {1, 1, 1, 1, 1},  // I
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0},
    {1, 1, 1, 1, 1}
  },
  {
    {1, 1, 1, 1, 1},  // J
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0},
    {1, 0, 1, 0, 0},
    {0, 1, 0, 0, 0}
  },
  {
    {1, 0, 0, 0, 1},  // K
    {1, 0, 0, 1, 0},
    {1, 1, 1, 0, 0},
    {1, 0, 0, 1, 0},
    {1, 0, 0, 0, 1}
  },
  {
    {1, 0, 0, 0, 0},  // L
    {1, 0, 0, 0, 0},
    {1, 0, 0, 0, 0},
    {1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1}
  },
  {
    {1, 0, 0, 0, 1},  // M
    {1, 1, 0, 1, 1},
    {1, 0, 1, 0, 1},
    {1, 0, 0, 0, 1},
    {1, 0, 0, 0, 1}
  },
  {
    {1, 0, 0, 0, 1},  // N
    {1, 1, 0, 0, 1},
    {1, 0, 1, 0, 1},
    {1, 0, 0, 1, 1},
    {1, 0, 0, 0, 1}
  },
  {
    {0, 1, 1, 1, 0},  // O
    {1, 0, 0, 0, 1},
    {1, 0, 0, 0, 1},
    {1, 0, 0, 0, 1},
    {0, 1, 1, 1, 0}
  },
  {
    {1, 1, 1, 1, 0},  // P
    {1, 0, 0, 0, 1},
    {1, 1, 1, 1, 0},
    {1, 0, 0, 0, 0},
    {1, 0, 0, 0, 0}
  },
  {
    {0, 1, 1, 1, 0},  // Q
    {1, 0, 0, 0, 1},
    {1, 0, 0, 0, 1},
    {1, 0, 0, 1, 1},
    {0, 1, 1, 1, 1}
  },
  {
    {1, 1, 1, 1, 0},  // R
    {1, 0, 0, 0, 1},
    {1, 1, 1, 1, 0},
    {1, 0, 0, 1, 0},
    {1, 0, 0, 0, 1}
  },
  {
    {0, 1, 1, 1, 1},  // S
    {1, 0, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 1},
    {1, 1, 1, 1, 0}
  },
  {
    {1, 1, 1, 1, 1},  // T
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0}
  },
  {
    {1, 0, 0, 0, 1},  // U
    {1, 0, 0, 0, 1},
    {1, 0, 0, 0, 1},
    {1, 0, 0, 0, 1},
    {0, 1, 1, 1, 0}
  },
  {
    {1, 0, 0, 0, 1},  // V
    {1, 0, 0, 0, 1},
    {1, 0, 0, 0, 1},
    {0, 1, 0, 1, 0},
    {0, 0, 1, 0, 0}
  },
  {
    {1, 0, 0, 0, 1},  // W
    {1, 0, 0, 0, 1},
    {1, 0, 1, 0, 1},
    {1, 0, 1, 0, 1},
    {0, 1, 0, 1, 0}
  },
  {
    {1, 0, 0, 0, 1},  // X
    {0, 1, 0, 1, 0},
    {0, 0, 1, 0, 0},
    {0, 1, 0, 1, 0},
    {1, 0, 0, 0, 1}
  },
  {
    {1, 0, 0, 0, 1},  // Y
    {0, 1, 0, 1, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0}
  },
  {
    {1, 1, 1, 1, 1},  // Z
    {0, 0, 0, 1, 0},
    {0, 0, 1, 0, 0},
    {0, 1, 0, 0, 0},
    {1, 1, 1, 1, 1}
  }
};

project(AirLogger)
cmake_minimum_required(VERSION 2.8)

SET(HEADERs logger.h
    )

SET(SRCs main.cpp
         logger.cpp
)



add_executable(${PROJECT_NAME} ${HEADERs} ${SRCs})


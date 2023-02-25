//
// Created by Patrick Exner on 14.12.22.
//

#ifndef GDEXAMPLE_H
#define GDEXAMPLE_H

#include <godot_cpp/classes/sprite2d.hpp>

namespace godot {

    class GDExample : public Sprite2D {
        GDCLASS(GDExample, Sprite2D)

    private:
        float time_passed;
        float time_emit;
        float amplitude;
        float speed;

    protected:
        static void _bind_methods();

    public:
        GDExample();
        ~GDExample();

        void _process(float delta);

        void set_amplitude(const float amplitude);
        float get_amplitude() const;

        void set_speed(const float speed);
        float get_speed() const;
    };

}

#endif
